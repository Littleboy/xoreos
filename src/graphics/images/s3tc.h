/* xoreos - A reimplementation of BioWare's Aurora engine
 *
 * xoreos is the legal property of its developers, whose names can be
 * found in the AUTHORS file distributed with this source
 * distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 *
 * The Infinity, Aurora, Odyssey, Eclipse and Lycium engines, Copyright (c) BioWare corp.
 * The Electron engine, Copyright (c) Obsidian Entertainment and BioWare corp.
 */

/** @file graphics/images/s3tc.h
 *  Manual S3TC DXTn decompression methods.
 */

#ifndef GRAPHICS_IMAGES_S3TC_H
#define GRAPHICS_IMAGES_S3TC_H

#include "common/types.h"

namespace Common {
	class SeekableReadStream;
}

namespace Graphics {

void decompressDXT1(byte *dest, Common::SeekableReadStream &src, uint32 width, uint32 height, uint32 pitch);
void decompressDXT3(byte *dest, Common::SeekableReadStream &src, uint32 width, uint32 height, uint32 pitch);
void decompressDXT5(byte *dest, Common::SeekableReadStream &src, uint32 width, uint32 height, uint32 pitch);

} // End of namespace Graphics

#endif // GRAPHICS_IMAGES_S3TC_H
