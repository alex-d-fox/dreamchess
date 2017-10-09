/*  DreamChess
**
**  DreamChess is the legal property of its developers, whose names are too
**  numerous to list here. Please refer to the COPYRIGHT file distributed
**  with this source distribution.
**
**  This program is free software: you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation, either version 3 of the License, or
**  (at your option) any later version.
**
**  This program is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef DREAMCHESS_TITLESCENE_H
#define DREAMCHESS_TITLESCENE_H

#include "Scene.h"
class Image;
class Model;

class TitleScene: public Scene {
public:
	TitleScene(DreamChess *d);
	void init();
	void update();
	void render();
private:
	Image *_backdrop;
	Image *_backdrop2;
	Image *_backdrop3D;	

	Model *_chessBoard;
};

#endif