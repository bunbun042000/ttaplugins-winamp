ttaplugins-winamp v3.2 Modified(Beta27) 
=====================================================

*This plugin 
is based on TAU Software(http://en.true-audio.com/)
TTA plug-in ver 3.2 for Winamp 2,5.
The modification is ID3v2 Tag read/write function using 
taglib(https://github.com/taglib/taglib).
And add read metadata (include album art) for MediaLibray.
From Beta9, decode engine was replaced by
TTA encoder/decoder/decoder multiplatform library, C++ version
(http://en.true-audio.com/)
This plugin performs Winamp Ver.2.9 or newer and tested by Winamp Ver.5.666.

*Install
 Please copy in_tta.dll and enc_tta.dll to Plugins folder in Winamp.

*Release Notes
2015-08-24 Beta27 Reduce number of accessing file at getting meta data(in_tta.dll)
2015-08-20 Beta26 Fix CPU overload because of accessing file at getting meta data(in_tta.dll)
2015-08-13 Beta25 Fix encoder was creating incomplete tta file(enc_tta.dll)
                  Fix function name for valid filename in trans coding(in_tta.dll)
				  Code cleanup(in_tta.dll)
2015-08-12 Beta24 Code cleanup(in_tta.dll)
                  Code cleanup(enc_tta.dll)
2015-08-11 Beta23 Change native Unicode compile(in_tta.dll)
                  Detach each plugin (in_tta and enc_tta)
2015-08-11 Beta22 Fix saves AlbumArt in in_tta.dll
2015-08-11 Beta21 Add enc_tta.dll
                  Fix some transcoding issue in in_tta.dll
				  Detach libtta from in_tta.dll. Use libtta.dll
                  Detach taglib from in_tta.dll. Use tag.dll
                  Change upstream taglib stable(2015/08/10 0:50:13 commit Hash:bc106ad81e1015c896b32ae1fec6cb3c3894ac84).
2015-08-04 Beta20 Fix some stabilize issues.
2015-08-04 Beta19 Fix transcoding.
2015-08-02 Beta18 Fix freeze when playing 24bit/sample file.
                  Remove title name function and uses Winamp itself.
				  Reduce file access when reading metadata.
				  Change plugin UNICODE base.
                  Change upstream taglib stable(2015/06/19 16:12:32 commit Hash:e90b5e5f2faded598688c48dd3bdd2fc6cd5cbab).
				  Change uses zlib.dll in Winamp.
				  Change compiler to VS2015.
2015-05-27 Beta17 Change base library to libtta++2.3.
                  Change base taglib stable(2015/05/25 21:41:37 commit Hash:c5f2e9342dfdf9a94dbcbf70fc3861b2221d1b39).
2014-11-28 Beta16 Change base library to libtta++2.2.
                  Change base taglib stable(2014/10/23 2:31:14 commit Hash:072851869a2980dab4aefd471ad7dd707993d74f).
				  Change compiler to VS2013.
2013-08-22 Beta15 Change base taglib stable(commit Hash:fddf3ed51b705d69e12df4a0cba01984ce82c638).
                  Fix memory leak in transcoding.
				  Change DLL taglib to static taglib. 
2011-12-10 Beta14 Revert multibyte version
                  Fix exception from libtta
2011-12-03 Beta13 Unicode Plugin version
                  Add exception processs from decoder
2011-11-27 Beta12 Fix freeze when invalid file will open.
                  Fix hung up when reading file with no album art.
2011-11-21 Beta11 Change base library to libtta++2.1.
                  Change taglib included to use external taglib dll.
                  Fix memory leak when reading album art.
2011-11-17 Beta10 Change base taglib 1.7.0.
                  Change compiler to VS2010.
2010-11-29 Beta9  Add reading album art.
2009-04-09 Beta8  Change compiler to VC2008.
                  Change Year tag from TDRL to TDRC in ID3 Ver2.4.
2007/10/23 Beta7  Fix incorrect Seek position.
                  (Thanks to h0shu (http://hoshustep.hp.infoseek.co.jp/dust.html))
                  Add format conversion function.
2006/07/03 Beta6  Change read year metadata.
2006/02/23 Beta5  Fix incorrect Beta4
2005/12/19 Beta4  Fix problem that other program cannot access playing tta file.
2005/12/16 Beta3  Fix reading ID3v2 Ver2.3 (incorrect decoding frame size)
2005/12/14 Beta2  Initial release.

*Copying
This libray is distributed under LGPL2.1

*Acknowledgement

Refer in_mpg123.dll source code made by Otachan(http://www3.cypress.ne.jp/otachan/)in reading metadata for media library.

Refer STEP(SuperTagEditor-kai Plugin Version (Nightmare)) source code made by Haseta(http://haseta2003.hp.infoseek.co.jp/) in ID3v2 related.

Refer patch made by h0shu(http://hoshustep.hp.infoseek.co.jp/dust.html) in fixing seek problem.

Yamagata Fumihiro
mailto:bunbun042000@gmail.com
