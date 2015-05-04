#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    recvr.setup(4567);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    while (recvr.hasWaitingMessages()){
        ofxOscMessage m;
        recvr.getNextMessage(&m);
        pos.x = m.getArgAsFloat(0);
        pos.y = m.getArgAsFloat(1);
    
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(ofColor::fuchsia);
    ofCircle(pos.x, pos.y, 100);
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

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

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
