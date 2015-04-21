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
	
	float xorig = 400;
	float yorig = 400;
	float radius =  ofMap( sin(ofGetElapsedTimef() * 20), -1,1, 0, 200);
	float angle = ofGetElapsedTimef() * 2;
	
	float x = xorig + radius * cos(angle);
	float y = yorig + radius * -sin(angle);
	
    pts.push_back(ofPoint(x,y));
    if (pts.size() > 100){
        pts.erase(pts.begin());
    }
	ofSetRectMode(OF_RECTMODE_CENTER);
	ofSetColor(255,255,255);
    ofFill();
    ofRect(x,y,30,30);
	
    ofSetLineWidth(2);
    ofNoFill();
    ofBeginShape();
    for (int i = 0; i < pts.size(); i++){
        ofVertex(pts[i].x, pts[i].y);
    }
    ofEndShape();
    

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

