#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    ofBackground(0);
    ofSetFrameRate(30);
}

//--------------------------------------------------------------
void testApp::update(){
    
    for (int i = 0; i < pts.size(); i++){
        pts[i].x += ofRandom(-1,1);
        pts[i].y += ofRandom(-1,1);
    }
    
}

//--------------------------------------------------------------
void testApp::draw(){

    ofNoFill();
    
    ofBeginShape();
    for (int i = 0; i < pts.size(); i++){
        ofVertex(pts[i].x, pts[i].y);
    }
    ofEndShape();
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

    pts.push_back(ofPoint(x,y));
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

    pts.clear();
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}