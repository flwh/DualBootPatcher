/*
 * Copyright (C) 2015  Andrew Gunnerson <andrewgunnerson@gmail.com>
 *
 * This file is part of DualBootPatcher
 *
 * DualBootPatcher is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * DualBootPatcher is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with DualBootPatcher.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "mbpio/private/filebase.h"

namespace io
{
namespace priv
{

FileBase::~FileBase()
{
}

std::string FileBase::errorString()
{
    switch (error()) {
    case ErrorInvalidFilename:
        return "Invalid or null filename";
    case ErrorInvalidOpenMode:
        return "Invalid open mode";
    case ErrorInvalidSeekOrigin:
        return "Invalid seek origin";
    case ErrorFileIsNotOpen:
        return "File is not open";
    case ErrorEndOfFile:
        return "End of file";
    case ErrorPlatformError:
        return platformErrorString();
    default:
        return std::string();
    }
}

}
}
