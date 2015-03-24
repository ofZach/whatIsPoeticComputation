#include "ofApp.h"




//bool checkIfHitsAndReflects( ofPoint a, ofPoint b, ofPoint from, ofPoint to, ofPoint & hit, ofPoint & reflect){
//    if (ofLineSegmentIntersection(a, b, from, to, hit)){
//        ofPoint normal = (b-a).normalize().getRotated(0,0,270);
//        ofPoint incident = (to - from).normalize();
//        reflect = incident - normal * 2.f * normal.dot(incident);
//        return true;
//    } else {
//        return false;
//    }
//}


//--------------------------------------------------------------
void ofApp::setup(){

    
    // make a bunch of segments to test
    
    for (int i = 0; i < 100; i++){
        
        lineSeg temp;
        temp.a.set(ofRandom(0,ofGetWidth()), ofRandom(0,ofGetHeight()), 0);
        temp.b = temp.a + ofPoint(100,0,0).getRotated(0,0, ofRandom(0,360));
        segments.push_back(temp);
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    
    ofBackground(0,0,0);
    
    
    ofPoint a, b;
    a.set(100,100);
    b.set(200,100);
    
    ofPoint top, mouse;
    top.set(0,0);
    mouse.set(mouseX, mouseY);
    
    ofLine(a,b);
    ofLine(top, mouse);
    ofPoint hit;
    
    for (int i = 0; i < segments.size(); i++){
        ofLine(segments[i].a, segments[i].b);
    }
    
    for (int i = 0; i < segments.size(); i++){
        if (ofLineSegmentIntersection(segments[i].a, segments[i].b, top, mouse, hit)){
            ofCircle(hit.x, hit.y, 10);
        }
    }
    
    
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
