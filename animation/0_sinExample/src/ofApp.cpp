#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	ofSetVerticalSync(true);
	
	ofBackground(0,0,0);
	
	ofSetCircleResolution(100);

}

//--------------------------------------------------------------
void ofApp::update(){
	
	
	

}

//--------------------------------------------------------------
void ofApp::draw(){
	
	
    ofDrawBitmapString(ofToString(ofGetElapsedTimef()), ofPoint(20,30));
    
    
    
//    
//    for (int i = 0; i < 50; i++){
//    
//        float sinValue = sin(ofGetElapsedTimef()*(i*0.1+1));
//        ofCircle(250 + sinValue*100,100 + i*10,10);
//        
//        
//    }
//    
    
    
    
    
    
    
	float sinOfTime = sin( ofGetElapsedTimef() * 2 );
	float sinOfTimeMapped = ofMap( sinOfTime, -1, 1, 50, 80);

	ofSetColor(255, 255, 255);
	ofCircle(400,400, sinOfTimeMapped);
	

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

