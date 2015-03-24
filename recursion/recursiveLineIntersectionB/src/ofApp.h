#pragma once

#include "ofMain.h"


class lineSeg {
    
public:
    
    ofPoint a;
    ofPoint b;
    
    ofPoint getNormalFacing ( ofPoint incident){
        ofPoint diff = b - a;
        diff.normalize();
        ofPoint norma = ofPoint(-diff.y, diff.x);
        ofPoint normb = ofPoint(diff.y, -diff.x);
        float a = norma.dot(incident);
        float b = normb.dot(incident);
        if (a < b) return norma;
        else return normb;
    }
    
};

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);


        vector < lineSeg > segments;
    
        void bounceAndDrawLine( ofPoint from, ofPoint to, int nTimes );
    
    
};
