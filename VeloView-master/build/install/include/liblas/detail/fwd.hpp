/******************************************************************************
 * $Id$
 *
 * Project:  libLAS - http://liblas.org - A BSD library for LAS format data.
 * Purpose:  Forward declarations for C++ libLAS 
 * Author:   Mateusz Loskot, mateusz@loskot.net
 *
 ******************************************************************************
 * Copyright (c) 2008, Mateusz Loskot
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

#ifndef LIBLAS_DETAIL_FWD_HPP_INCLUDED
#define LIBLAS_DETAIL_FWD_HPP_INCLUDED

#include <boost/shared_ptr.hpp>

// Forward declarations
namespace liblas {

template<typename T> class Bounds;
class Classification;
class Color;
class FilterI;
class Header;
class Point;
class PointFormat;
class Reader;
class ReaderI;
class Writer;
class WriterI;
class SpatialReference;
class TransformI;
class VariableRecord;

typedef boost::shared_ptr<Header> HeaderPtr;
typedef boost::shared_ptr<const Header> ConstHeaderPtr;

typedef boost::shared_ptr<Point> PointPtr;
typedef boost::shared_ptr<TransformI> TransformPtr;
typedef boost::shared_ptr<FilterI> FilterPtr;
typedef boost::shared_ptr<ReaderI> ReaderIPtr;
typedef boost::shared_ptr<WriterI> WriterIPtr;


namespace detail {

class ReaderImpl;
class WriterImpl;
struct PointRecord;
struct Color;

}} // namespace liblas::detail

#endif // LIBLAS_DETAIL_FWD_HPP_INCLUDED

