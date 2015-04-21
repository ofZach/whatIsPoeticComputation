#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    a.set(50,250);
    b.set(1000-50, 250);
    
    pct = 0;
}

//--------------------------------------------------------------
void ofApp::update(){

    
    pct += 0.005;   // ie: pct = pct + 0.005
    
    if (pct > 1){
        pct = 0;
    }
    
    cout << pct << endl;
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    ofSetColor(255);
    ofCircle(a, 10);
    ofCircle(b, 10);
    
    //--------- detroit
    
//    float mousePct = (float)mouseY / (float)ofGetHeight();
//    if (mousePct < 0){
//        mousePct = 0;
//    }
//    if (mousePct > 1){
//        mousePct = 1;
//    }
    
    //--------- disneyland
    
    //float mousePct = ofMap(mouseY,0,ofGetHeight(), 0,1, true);
    //float pct = mousePct;   ////0.9;  // <3 0-1 !
    
    
    float pctShaped =  powf(pct, 0.5);     //pct * pct;      ///powf(pct, 2);
    
    ofPoint mixPt = (1-pctShaped) * a + pctShaped * b;

    ofSetColor(ofColor::fuchsia);
    ofCircle(mixPt, 10);
    
//    ofPoint mixPtLinear = (1-pct) * a + pct * b;
//    ofSetColor(ofColor::fuchsia);
//    ofCircle(mixPtLinear + ofPoint(0,20), 10);
//    
    
    
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
