#include "ofApp.h"




bool checkIfHitsAndReflects( lineSeg seg, ofPoint from, ofPoint to, ofPoint & hit, ofPoint & reflect){
    
    ofPoint a = seg.a;
    ofPoint b = seg.b;
    ofPoint normal = seg.getNormalFacing(from);
    
    if (ofLineSegmentIntersection(a, b, from, to, hit)){
        ofPoint incident = (to - from).normalize();
        reflect = incident - normal * 2.f * normal.dot(incident);
        return true;
    } else {
        return false;
    }
}



//--------------------------------------------------------------
void ofApp::bounceAndDrawLine( ofPoint from, ofPoint to, int nTimes ){

    
    ofPoint closestHit;
    ofPoint closestReflect;
    float closestDistance = 100000000;
    
    for (int i = 0; i < segments.size(); i++){
        
        ofPoint hit;
        ofPoint reflect;
        
        if (checkIfHitsAndReflects(segments[i], from, to, hit, reflect)){
    
            float distance = (from - hit).length();
            if (distance < closestDistance && distance > 0.01){
                closestHit = hit;
                closestReflect = reflect;
                closestDistance = distance;
                
                
            }
    
        
        }
    
    }
    
    if (closestDistance < 100000){
        ofLine(from, closestHit);
        bounceAndDrawLine(closestHit,closestHit + closestReflect * 1000, nTimes++);
    } else {
        ofLine(from, to);
    }
    
    
    
    
}




//--------------------------------------------------------------
void ofApp::setup(){

    
    // make a bunch of segments to test
    
    for (int i = 0; i < 550; i++){
        
        lineSeg temp;
        temp.a.set(ofRandom(0,ofGetWidth()), ofRandom(0,ofGetHeight()), 0);
        temp.b = temp.a + ofPoint(20,0,0).getRotated(0,0, ofRandom(0,360));
        segments.push_back(temp);
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground(0);
    
    
    ofPoint a, b;
    a.set(100,100);
    b.set(200,100);
    
    ofPoint top, mouse;
    top.set(ofGetWidth()/2, ofGetHeight()/2);
    mouse.set(mouseX, mouseY);
    //ofLine(top, mouse);
    ofPoint hit;

    ofSetColor(255,0,0,255);
    bounceAndDrawLine(top, mouse, 0);
    
    ofSetColor(255,255,255);
    for (int i = 0; i < segments.size(); i++){
        ofLine(segments[i].a, segments[i].b);
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
