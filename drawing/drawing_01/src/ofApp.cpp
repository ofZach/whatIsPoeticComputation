#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(90);
    ofSetBackgroundAuto(false);
    
    
    myPt.set(-250,250);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(255,255,255,10);
    ofCircle( myPt.x, myPt.y, 30);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

    myPt.set(x,y);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

    myPt.set(x,y);
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
