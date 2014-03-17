
/*
 *  Utilities.hpp
 *  sfeMovie project
 *
 *  Copyright (C) 2010-2014 Lucas Soltic
 *  lucas.soltic@orange.fr
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *
 */

#ifndef SFEMOVIE_UTILITIES_HPP
#define SFEMOVIE_UTILITIES_HPP

#include "Stream.hpp"
#include "Log.hpp"
#include <string>

namespace sfe {
	/** Display a list of all the available demuxers as follow:
	 * - decoder_type: decoder_name
	 */
	void dumpAvailableDemuxers(void);
	
	/** Display a list of all the available decoders as follow:
	 * - decoder_type: decoder_name
	 */
	void dumpAvailableDecoders(void);
	
	/** Gives the string representing the given @a type
	 *
	 * Conversion is done as follow:
	 * MEDIA_TYPE_AUDIO		-> audio
	 * MEDIA_TYPE_SUBTITLE	-> subtitle
	 * MEDIA_TYPE_VIDEO		-> video
	 * MEDIA_TYPE_UNKNOWN	-> unknown
	 *
	 * @param type the media type to stringify
	 * @return the stringified media type
	 */
	std::string MediaTypeToString(MediaType type);
	
	#define BENCH_START \
	{ \
		sf::Clock __bench;

	#define BENCH_END(title) \
		sfeLogDebug(std::string(title) + " took " + s(__bench.getElapsedTime().asMilliseconds()) + "ms"); \
	}

}

#endif
