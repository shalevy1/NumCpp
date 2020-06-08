/// @file
/// @author David Pilger <dpilger26@gmail.com>
/// [GitHub Repository](https://github.com/dpilger26/NumCpp)
/// @version 2.0.0
///
/// @section License
/// Copyright 2020 David Pilger
///
/// Permission is hereby granted, free of charge, to any person obtaining a copy of this
/// software and associated documentation files(the "Software"), to deal in the Software
/// without restriction, including without limitation the rights to use, copy, modify,
/// merge, publish, distribute, sublicense, and/or sell copies of the Software, and to
/// permit persons to whom the Software is furnished to do so, subject to the following
/// conditions :
///
/// The above copyright notice and this permission notice shall be included in all copies
/// or substantial portions of the Software.
///
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
/// INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
/// PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE
/// FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
/// OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
/// DEALINGS IN THE SOFTWARE.
///
/// @section Description
/// Functions for working with NdArrays
///
#pragma once

#include "NumCpp/Core/Shape.hpp"
#include "NumCpp/Core/Types.hpp"
#include "NumCpp/NdArray.hpp"

namespace nc
{
    //============================================================================
    // Method Description:
    ///						Return a new array of given shape and type, filled with inFillValue
    ///
    ///                     NumPy Reference: https://www.numpy.org/devdocs/reference/generated/numpy.full.html
    ///
    /// @param				inSquareSize
    /// @param				inFillValue
    /// @return
    ///				NdArray
    ///
    template<typename dtype>
    NdArray<dtype, Alloc> full(uint32 inSquareSize, dtype inFillValue) noexcept
    {
        NdArray<dtype, Alloc> returnArray(inSquareSize, inSquareSize);
        returnArray.fill(inFillValue);
        return returnArray;
    }

    //============================================================================
    // Method Description:
    ///						Return a new array of given shape and type, filled with inFillValue
    ///
    ///                     NumPy Reference: https://www.numpy.org/devdocs/reference/generated/numpy.full.html
    ///
    /// @param				inNumRows
    /// @param				inNumCols
    /// @param				inFillValue
    /// @return
    ///				NdArray
    ///
    template<typename dtype>
    NdArray<dtype, Alloc> full(uint32 inNumRows, uint32 inNumCols, dtype inFillValue) noexcept
    {
        NdArray<dtype, Alloc> returnArray(inNumRows, inNumCols);
        returnArray.fill(inFillValue);
        return returnArray;
    }

    //============================================================================
    // Method Description:
    ///						Return a new array of given shape and type, filled with inFillValue
    ///
    ///                     NumPy Reference: https://www.numpy.org/devdocs/reference/generated/numpy.full.html
    ///
    /// @param				inShape
    /// @param				inFillValue
    /// @return
    ///				NdArray
    ///
    template<typename dtype>
    NdArray<dtype, Alloc> full(const Shape& inShape, dtype inFillValue) noexcept
    {
        return full(inShape.rows, inShape.cols, inFillValue);
    }
}
