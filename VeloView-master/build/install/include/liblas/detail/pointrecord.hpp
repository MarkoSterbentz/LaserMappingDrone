/******************************************************************************
 * $Id$
 *
 * Project:  libLAS - http://liblas.org - A BSD library for LAS format data.
 * Purpose:  PointRecord definitions
 * Author:   Mateusz Loskot, mateusz@loskot.net
 *
 ******************************************************************************
 * Copyright (c) 2010, Mateusz Loskot
 *
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without 
 * modification, are permitted provided that the following 
 * conditions are met:
 * 
 *     * Redistributions of source code must retain the above copyright 
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright 
 *       notice, this list of conditions and the following disclaimer in 
 *       the documentation and/or other materials provided 
 *       with the distribution.
 *     * Neither the name of the Martin Isenburg or Iowa Department 
 *       of Natural Resources nor the names of its contributors may be 
 *       used to endorse or promote products derived from this software 
 *       without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS 
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE 
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, 
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS 
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED 
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, 
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT 
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY 
 * OF SUCH DAMAGE.
 ****************************************************************************/

#ifndef LIBLAS_DETAIL_POINTRECORD_HPP_INCLUDED
#define LIBLAS_DETAIL_POINTRECORD_HPP_INCLUDED

#if defined(_MSC_VER) && _MSC_VER < 1700
#include <boost/cstdint.hpp>
using boost::int8_t;
using boost::int32_t;
using boost::uint8_t;
using boost::uint16_t;
#else
#include <stdint.h>
#endif

namespace liblas { namespace detail {

struct PointRecord
{
    PointRecord()
        : x(0)
        , y(0)
        , z(0)
        , intensity(0)
        , flags(0)
        , classification(0)
        , scan_angle_rank(0)
        , user_data(0)
        , point_source_id(0)
    {}

    int32_t x;
    int32_t y;
    int32_t z;
    uint16_t intensity;
    uint8_t flags; // TODO: Replace with portable std::bitset<8>
    uint8_t classification;
    int8_t scan_angle_rank;
    uint8_t user_data; // 1.0: File Marker / 1.1: User Data
    uint16_t point_source_id; // 1.0: User Bit field / 1.1: Point Source ID
};

}} // namespace liblas::detail

#endif // LIBLAS_DETAIL_POINTRECORD_HPP_INCLUDED
