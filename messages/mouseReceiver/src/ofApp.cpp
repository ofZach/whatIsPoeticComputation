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
        
        /*cout << m.getAddress() << endl;
        cout << m.getArgAsInt32(0) << endl;
        cout << m.getArgAsInt32(1) << endl;
        cout << m.getArgAsString(2) << endl;
        */
        
        recvdPt.x = m.getArgAsInt32(0);
        recvdPt.y = m.getArgAsInt32(1);
        recvdName = m.getArgAsString(2);
        
        
        
    }
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(ofColor::pink);
    
    ofCircle(recvdPt.x, recvdPt.y, 10);
    ofDrawBitmapString(recvdName, recvdPt.x + 10, recvdPt.y);
    
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
