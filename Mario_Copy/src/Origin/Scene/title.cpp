
#include "title.h"


cTitle::cTitle(Font& font) :
cScene(font) {
}


void cTitle::update() {
}


void cTitle::draw() {
  m_font.draw("â∫êÖìπÇÃêÌÇ¢ÅiâºÅj", Vec2f(0, 0), Color::white);
  m_font.draw("Å`ìDè¿ï“Å`", Vec2f(0, -50), Color::yellow);
}
