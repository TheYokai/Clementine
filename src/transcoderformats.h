/* This file is part of Clementine.

   Clementine is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   Clementine is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Clementine.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef TRANSCODERFORMATS_H
#define TRANSCODERFORMATS_H

#include "transcoder.h"

class OggVorbisTranscoder : public TranscoderFormat {
 public:
  QString name() const { return "Ogg Vorbis"; }
  QString file_extension() const { return "ogg"; }

  GstElement* CreateOutputBin() const;
};

class OggSpeexTranscoder : public TranscoderFormat {
 public:
  QString name() const { return "Ogg Speex"; }
  QString file_extension() const { return "spx"; }

  GstElement* CreateOutputBin() const;
};

class FlacTranscoder : public TranscoderFormat {
 public:
  QString name() const { return "FLAC"; }
  QString file_extension() const { return "flac"; }

  GstElement* CreateOutputBin() const;
};

class Mp3Transcoder : public TranscoderFormat {
 public:
  QString name() const { return "MP3"; }
  QString file_extension() const { return "mp3"; }

  GstElement* CreateOutputBin() const;
};

class AacTranscoder : public TranscoderFormat {
 public:
  QString name() const { return "AAC"; }
  QString file_extension() const { return "aac"; }

  GstElement* CreateOutputBin() const;
};

class WindowsMediaTranscoder : public TranscoderFormat {
 public:
  QString name() const { return "Windows Media"; }
  QString file_extension() const { return "wma"; }

  GstElement* CreateOutputBin() const;
};

#endif // TRANSCODERFORMATS_H
