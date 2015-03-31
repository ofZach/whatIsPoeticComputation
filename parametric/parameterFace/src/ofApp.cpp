#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    
    ofSetCircleResolution(100);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(ofColor::cyan);
    
    ofSetColor(255);
    ofCircle(250,250,200);
    
    
    float eyeSize = 20;
    float eyeDistance = 200;
    ofPoint eyeCenter;

    eyeCenter.x = 250;
    eyeCenter.y = 170;
    
    
    ofSetColor( ofColor::darkBlue);
    ofCircle(eyeCenter.x - eyeDistance/2,eyeCenter.y,eyeSize);
    ofCircle(eyeCenter.x + eyeDistance/2,eyeCenter.y,eyeSize);
    
    
    ofSetColor(ofColor::moccasin);
    ofTriangle(262,246, 237,293, 307,293);
    
    
    ofSetColor(ofColor::red);
    
    ofSetLineWidth(5);
    
    
    ofPoint a,b,c,d;
    
    a.set(199,359);
    d.set(351,364);
    
   
    b = 0.66 * a + 0.33 * d;
    c = 0.33 * a + 0.66 * d;
    
    float happiness = mouseX;
    
    b.y += happiness;
    c.y += happiness;
    
    ofNoFill();
    ofBezier(a.x, a.y,
             b.x, b.y,
             c.x, c.y,
             d.x, d.y);
    
    ofFill();
    
    

    
    
    
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

    cout << x << "," << y << endl;
    
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
