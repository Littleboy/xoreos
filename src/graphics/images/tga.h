/* eos - A reimplementation of BioWare's Aurora engine
 * Copyright (c) 2010-2011 Sven Hesse (DrMcCoy), Matthew Hoops (clone2727)
 *
 * The Infinity, Aurora, Odyssey and Eclipse engines, Copyright (c) BioWare corp.
 * The Electron engine, Copyright (c) Obsidian Entertainment and BioWare corp.
 *
 * This file is part of eos and is distributed under the terms of
 * the GNU General Public Licence. See COPYING for more informations.
 */

/** @file graphics/images/tga.h
 *  Decoding TGA (TarGa) images.
 */

#ifndef GRAPHICS_IMAGES_TGA_H
#define GRAPHICS_IMAGES_TGA_H

#include "graphics/images/decoder.h"

namespace Common {
	class SeekableReadStream;
}

namespace Graphics {

/** TarGa image. */
class TGA : public ImageDecoder {
public:
	TGA(Common::SeekableReadStream &tga);
	~TGA();

private:
	// Loading helpers
	void load(Common::SeekableReadStream &tga);
	void readHeader(Common::SeekableReadStream &tga, byte &imageType);
	void readData(Common::SeekableReadStream &tga, byte imageType);
};

} // End of namespace Graphics

#endif // GRAPHICS_IMAGES_TGA_H
