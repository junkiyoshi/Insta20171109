#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofSetFrameRate(60);
	ofBackground(255);
	ofSetWindowTitle("Insta");

	for (int i = 0; i < 256; i++) {
		this->particles.push_back(shared_ptr<Particle>(new Particle()));
	}
}

//--------------------------------------------------------------
void ofApp::update() {
	for(int i = 0; i < this->particles.size(); i++){
		this->particles[i]->update();
	}
}

//--------------------------------------------------------------
void ofApp::draw() {
	for (int i = 0; i < this->particles.size(); i++) {
		this->particles[i]->draw(this->particles);
	}

}

//--------------------------------------------------------------
int main() {
	ofSetupOpenGL(720, 720, OF_WINDOW);
	ofRunApp(new ofApp());
}