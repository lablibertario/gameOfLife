#pragma once

#include "gameBoard.h"
#include "ofxGui.h"
#include "slider.h"
//#include "ofMain.h"

class testApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        void updateTimeChanged(int & newUpdateTime);
    
        GameBoard* board;
        Slider updateTime;                  // millis to wait to update during run
        int boardX;
        int boardY;
        int gridSize;
        int cellSize;
        unsigned long long lastUpdate;      // millis of boardgame update time
    
        bool play;                          // play/pause game
        ofColor highlight_bg;
        ofColor highlight_fg;
};
