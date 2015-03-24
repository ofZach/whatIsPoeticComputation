#include "ofApp.h"



void ofApp::drawLine( ofPoint pos, float angle, int level){
    
    if (level > 100) return;
    

    int sizeOfStep = 5;
    ofPoint moveTo = sizeOfStep * ofPoint(cos(angle), sin(angle));
    ofSetColor(255, 255, 255);
    ofLine(pos, pos + moveTo);
    pos = pos + moveTo;
    angle += mouseX/100.0;
    drawLine(pos, angle, level+1);
    
    if (ofRandom(0,1) > 0.93){
        
        drawLine(pos, angle + ofRandom(-0.6, 0.6), level+1);
    }
    //angle += 1;
    

}

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofSeedRandom(0);
    
    ofBackground(0);
    
    ofSetColor(255,255,255,100);
 
    drawLine( ofPoint (500,500),  -PI/2, 0);
    
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
