// Copyright 2013-2021 the openage authors. See copying.md for legal info.

// Warning: this file is a dummy file and was auto-generated by the v0.4.1 converter;
// its purpose is to keep the deprecated gamestate compilable and intact;
// these files keep only the minimum functionality and should not be changed;
// For details, see buildsystem/codegen.cmake and openage/codegen.

#pragma once

#include <cstddef>
#include <cstdint>
#include <string>
#include "util/csv.h"



namespace openage {
namespace gamedata {

/**
 * one sprite, as part of a texture atlas.
 *
 * this struct stores information about positions and sizes
 * of sprites included in the 'big texture'.
 */
struct subtexture {
	int32_t x;
	int32_t y;
	int32_t w;
	int32_t h;
	int32_t cx;
	int32_t cy;
	static constexpr size_t member_count = 6;
	int fill(const std::string &line);
	bool recurse(const openage::util::CSVCollection &storage, const std::string &basedir);

};

} // gamedata
} // openage
