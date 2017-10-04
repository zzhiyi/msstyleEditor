#pragma once

#include <stdint.h>
#include <unordered_map>

// NAME SOURCES
//#include <Uxtheme.h>
//#include <vsstyle.h>
//#include <vssym32.h>

// maps nicely
// https://msdn.microsoft.com/de-de/library/system.windows.forms.visualstyles(v=vs.110).aspx
// System.Windows.Forms.Visualstyles.dll !!

namespace msstyle
{

	/////////////////////////////////////////////////////////////////////////////
	// The following maps are used for finding the name to an ID
	/////////////////////////////////////////////////////////////////////////////

	// This map hold all known properties and datatypes
	static std::unordered_map<int, const char*> PROPERTY_MAP =
	{
		{ 2, "DIBDATA" },
		{ 8, "GLYPHDIBDATA" },
		{ 200, "ENUM" },
		{ 201, "STRING" },
		{ 202, "INT" },
		{ 203, "BOOL" },
		{ 204, "COLOR" },
		{ 205, "MARGINS" },
		{ 206, "FILENAME" },
		{ 207, "SIZE" },
		{ 208, "POSITION" },
		{ 209, "RECT" },
		{ 210, "FONT" },
		{ 211, "INTLIST" },
		{ 212, "HBITMAP" },
		{ 213, "IMAGEATLAS" }, // DISKSTREAM
		{ 214, "STREAM" },
		{ 215, "BITMAPREF" },
		{ 216, "FLOAT" },
		{ 217, "FLOATLIST" },
		{ 401, "COLORSCHEMES" },
		{ 402, "SIZES" },
		{ 403, "CHARSET" },
		{ 600, "NAME" },
		{ 601, "DISPLAYNAME" },
		{ 602, "TOOLTIP" },
		{ 603, "COMPANY" },
		{ 604, "AUTHOR" },
		{ 605, "COPYRIGHT" },
		{ 606, "URL" },
		{ 607, "VERSION" },
		{ 608, "DESCRIPTION" },
		{ 601, "FIRST_RCSTRING_NAME" },
		{ 608, "LAST_RCSTRING_NAME" },
		{ 801, "CAPTIONFONT" },
		{ 802, "SMALLCAPTIONFONT" },
		{ 803, "MENUFONT" },
		{ 804, "STATUSFONT" },
		{ 805, "MSGBOXFONT" },
		{ 806, "ICONTITLEFONT" },
		{ 807, "HEADING1FONT" },
		{ 808, "HEADING2FONT" },
		{ 809, "BODYFONT" },
		{ 801, "FIRSTFONT" },
		{ 809, "LASTFONT" },
		{ 1001, "FLATMENUS" },
		{ 1001, "FIRSTBOOL" },
		{ 1001, "LASTBOOL" },
		{ 1201, "SIZINGBORDERWIDTH" },
		{ 1202, "SCROLLBARWIDTH" },
		{ 1203, "SCROLLBARHEIGHT" },
		{ 1204, "CAPTIONBARWIDTH" },
		{ 1205, "CAPTIONBARHEIGHT" },
		{ 1206, "SMCAPTIONBARWIDTH" },
		{ 1207, "SMCAPTIONBARHEIGHT" },
		{ 1208, "MENUBARWIDTH" },
		{ 1209, "MENUBARHEIGHT" },
		{ 1210, "PADDEDBORDERWIDTH" },
		{ 1201, "FIRSTSIZE" },
		{ 1210, "LASTSIZE" },
		{ 1301, "MINCOLORDEPTH" },
		{ 1301, "FIRSTINT" },
		{ 1301, "LASTINT" },
		{ 1401, "CSSNAME" },
		{ 1402, "XMLNAME" },
		{ 1403, "LASTUPDATED" },
		{ 1404, "ALIAS" },
		{ 1401, "FIRSTSTRING" },
		{ 1404, "LASTSTRING" },
		{ 1601, "SCROLLBAR" },
		{ 1602, "BACKGROUND" },
		{ 1603, "ACTIVECAPTION" },
		{ 1604, "INACTIVECAPTION" },
		{ 1605, "MENU" },
		{ 1606, "WINDOW" },
		{ 1607, "WINDOWFRAME" },
		{ 1608, "MENUTEXT" },
		{ 1609, "WINDOWTEXT" },
		{ 1610, "CAPTIONTEXT" },
		{ 1611, "ACTIVEBORDER" },
		{ 1612, "INACTIVEBORDER" },
		{ 1613, "APPWORKSPACE" },
		{ 1614, "HIGHLIGHT" },
		{ 1615, "HIGHLIGHTTEXT" },
		{ 1616, "BTNFACE" },
		{ 1617, "BTNSHADOW" },
		{ 1618, "GRAYTEXT" },
		{ 1619, "BTNTEXT" },
		{ 1620, "INACTIVECAPTIONTEXT" },
		{ 1621, "BTNHIGHLIGHT" },
		{ 1622, "DKSHADOW3D" },
		{ 1623, "LIGHT3D" },
		{ 1624, "INFOTEXT" },
		{ 1625, "INFOBK" },
		{ 1626, "BUTTONALTERNATEFACE" },
		{ 1627, "HOTTRACKING" },
		{ 1628, "GRADIENTACTIVECAPTION" },
		{ 1629, "GRADIENTINACTIVECAPTION" },
		{ 1630, "MENUHILIGHT" },
		{ 1631, "MENUBAR" },
		{ 1601, "FIRSTCOLOR" },
		{ 1631, "LASTCOLOR" },
		{ 1801, "FROMHUE1" },
		{ 1802, "FROMHUE2" },
		{ 1803, "FROMHUE3" },
		{ 1804, "FROMHUE4" },
		{ 1805, "FROMHUE5" },
		{ 1806, "TOHUE1" },
		{ 1807, "TOHUE2" },
		{ 1808, "TOHUE3" },
		{ 1809, "TOHUE4" },
		{ 1810, "TOHUE5" },
		{ 2001, "FROMCOLOR1" },
		{ 2002, "FROMCOLOR2" },
		{ 2003, "FROMCOLOR3" },
		{ 2004, "FROMCOLOR4" },
		{ 2005, "FROMCOLOR5" },
		{ 2006, "TOCOLOR1" },
		{ 2007, "TOCOLOR2" },
		{ 2008, "TOCOLOR3" },
		{ 2009, "TOCOLOR4" },
		{ 2010, "TOCOLOR5" },
		{ 2201, "TRANSPARENT" },
		{ 2202, "AUTOSIZE" },
		{ 2203, "BORDERONLY" },
		{ 2204, "COMPOSITED" },
		{ 2205, "BGFILL" },
		{ 2206, "GLYPHTRANSPARENT" },
		{ 2207, "GLYPHONLY" },
		{ 2208, "ALWAYSSHOWSIZINGBAR" },
		{ 2209, "MIRRORIMAGE" },
		{ 2210, "UNIFORMSIZING" },
		{ 2211, "INTEGRALSIZING" },
		{ 2212, "SOURCEGROW" },
		{ 2213, "SOURCESHRINK" },
		{ 2214, "DRAWBORDERS" },
		{ 2215, "NOETCHEDEFFECT" },
		{ 2216, "TEXTAPPLYOVERLAY" },
		{ 2217, "TEXTGLOW" },
		{ 2218, "TEXTITALIC" },
		{ 2219, "COMPOSITEDOPAQUE" },
		{ 2220, "LOCALIZEDMIRRORIMAGE" },
		{ 2401, "IMAGECOUNT" },
		{ 2402, "ALPHALEVEL" },
		{ 2403, "BORDERSIZE" },
		{ 2404, "ROUNDCORNERWIDTH" },
		{ 2405, "ROUNDCORNERHEIGHT" },
		{ 2406, "GRADIENTRATIO1" },
		{ 2407, "GRADIENTRATIO2" },
		{ 2408, "GRADIENTRATIO3" },
		{ 2409, "GRADIENTRATIO4" },
		{ 2410, "GRADIENTRATIO5" },
		{ 2411, "PROGRESSCHUNKSIZE" },
		{ 2412, "PROGRESSSPACESIZE" },
		{ 2413, "SATURATION" },
		{ 2414, "TEXTBORDERSIZE" },
		{ 2415, "ALPHATHRESHOLD" },
		{ 2416, "WIDTH" },
		{ 2417, "HEIGHT" },
		{ 2418, "GLYPHINDEX" },
		{ 2419, "TRUESIZESTRETCHMARK" },
		{ 2420, "MINDPI1" },
		{ 2421, "MINDPI2" },
		{ 2422, "MINDPI3" },
		{ 2423, "MINDPI4" },
		{ 2424, "MINDPI5" },
		{ 2425, "TEXTGLOWSIZE" },
		{ 2426, "FRAMESPERSECOND" },
		{ 2427, "PIXELSPERFRAME" },
		{ 2428, "ANIMATIONDELAY" },
		{ 2429, "GLOWINTENSITY" },
		{ 2430, "OPACITY" },
		{ 2431, "COLORIZATIONCOLOR" },
		{ 2432, "COLORIZATIONOPACITY" },
		{ 2433, "MINDPI6" },	// since win 10
		{ 2434, "MINDPI7" },	// since win 10
		{ 2601, "GLYPHFONT" },
		{ 3001, "IMAGEFILE" },
		{ 3002, "IMAGEFILE1" },
		{ 3003, "IMAGEFILE2" },
		{ 3004, "IMAGEFILE3" },
		{ 3005, "IMAGEFILE4" },
		{ 3006, "IMAGEFILE5" },
		{ 3008, "GLYPHIMAGEFILE" },
		{ 3009, "IMAGEFILE6" },	// since win 10
		{ 3010, "IMAGEFILE7" },	// since win 10
		{ 3201, "TEXT" },
		{ 3202, "CLASSICVALUE" },
		{ 3401, "OFFSET" },
		{ 3402, "TEXTSHADOWOFFSET" },
		{ 3403, "MINSIZE" },
		{ 3404, "MINSIZE1" },
		{ 3405, "MINSIZE2" },
		{ 3406, "MINSIZE3" },
		{ 3407, "MINSIZE4" },
		{ 3408, "MINSIZE5" },
		{ 3409, "NORMALSIZE" },
		{ 3601, "SIZINGMARGINS" },
		{ 3602, "CONTENTMARGINS" },
		{ 3603, "CAPTIONMARGINS" },
		{ 3801, "BORDERCOLOR" },
		{ 3802, "FILLCOLOR" },
		{ 3803, "TEXTCOLOR" },
		{ 3804, "EDGELIGHTCOLOR" },
		{ 3805, "EDGEHIGHLIGHTCOLOR" },
		{ 3806, "EDGESHADOWCOLOR" },
		{ 3807, "EDGEDKSHADOWCOLOR" },
		{ 3808, "EDGEFILLCOLOR" },
		{ 3809, "TRANSPARENTCOLOR" },
		{ 3810, "GRADIENTCOLOR1" },
		{ 3811, "GRADIENTCOLOR2" },
		{ 3812, "GRADIENTCOLOR3" },
		{ 3813, "GRADIENTCOLOR4" },
		{ 3814, "GRADIENTCOLOR5" },
		{ 3815, "SHADOWCOLOR" },
		{ 3816, "GLOWCOLOR" },
		{ 3817, "TEXTBORDERCOLOR" },
		{ 3818, "TEXTSHADOWCOLOR" },
		{ 3819, "GLYPHTEXTCOLOR" },
		{ 3820, "GLYPHTRANSPARENTCOLOR" },
		{ 3821, "FILLCOLORHINT" },
		{ 3822, "BORDERCOLORHINT" },
		{ 3823, "ACCENTCOLORHINT" },
		{ 3824, "TEXTCOLORHINT" },
		{ 3825, "HEADING1TEXTCOLOR" },
		{ 3826, "HEADING2TEXTCOLOR" },
		{ 3827, "BODYTEXTCOLOR" },
		{ 4001, "BGTYPE" },
		{ 4002, "BORDERTYPE" },
		{ 4003, "FILLTYPE" },
		{ 4004, "SIZINGTYPE" },
		{ 4005, "HALIGN" },
		{ 4006, "CONTENTALIGNMENT" },
		{ 4007, "VALIGN" },
		{ 4008, "OFFSETTYPE" },
		{ 4009, "ICONEFFECT" },
		{ 4010, "TEXTSHADOWTYPE" },
		{ 4011, "IMAGELAYOUT" },
		{ 4012, "GLYPHTYPE" },
		{ 4013, "IMAGESELECTTYPE" },
		{ 4014, "GLYPHFONTSIZINGTYPE" },
		{ 4015, "TRUESIZESCALINGTYPE" },
		{ 5001, "USERPICTURE" },
		{ 5002, "DEFAULTPANESIZE" },
		{ 5003, "BLENDCOLOR" },
		{ 5004, "CUSTOMSPLITRECT" },
		{ 5005, "ANIMATIONBUTTONRECT" },
		{ 5006, "ANIMATIONDURATION" },
		{ 6000, "TRANSITIONDURATIONS" },
		{ 7001, "SCALEDBACKGROUND" },
		{ 8000, "ATLASIMAGE" },
		{ 8001, "ATLASINPUTIMAGE" },
		{ 8002, "ATLASRECT" }
	};

	static std::unordered_map<int, const char*> DATATYPE_MAP =
	{
		{ 200, "ENUM" },
		{ 201, "STRING" },
		{ 202, "INT" },
		{ 203, "BOOL" },
		{ 204, "COLOR" },
		{ 205, "MARGINS" },
		{ 206, "FILENAME" },
		{ 207, "SIZE" },
		{ 208, "POSITION" },
		{ 209, "RECT" },
		{ 210, "FONT" },
		{ 211, "INTLIST" },
		{ 212, "HBITMAP" },
		{ 213, "DISKSTREAM" },
		{ 214, "STREAM" },
		{ 215, "BITMAPREF" },
		{ 216, "FLOAT" },
		{ 217, "FLOATLIST" },
	};

	enum IDENTIFIER
	{
		DIBDATA = 2,
		GLYPHDIBDATA = 8,
		ENUM = 200,
		STRING = 201,
		INT = 202,
		BOOL = 203,
		COLOR = 204,
		MARGINS = 205,
		FILENAME = 206,
		SIZE = 207,
		POSITION = 208,
		RECT = 209,
		FONT = 210,
		INTLIST = 211,
		HBITMAP = 212,
		DISKSTREAM = 213,
		STREAM = 214,
		BITMAPREF = 215,
		COLORSCHEMES = 401,
		SIZES = 402,
		CHARSET = 403,
		NAME = 600,
		DISPLAYNAME = 601,
		TOOLTIP = 602,
		COMPANY = 603,
		AUTHOR = 604,
		COPYRIGHT = 605,
		URL = 606,
		VERSION = 607,
		DESCRIPTION = 608,
		FIRST_RCSTRING_NAME = 601,
		LAST_RCSTRING_NAME = 608,
		CAPTIONFONT = 801,
		SMALLCAPTIONFONT = 802,
		MENUFONT = 803,
		STATUSFONT = 804,
		MSGBOXFONT = 805,
		ICONTITLEFONT = 806,
		HEADING1FONT = 807,
		HEADING2FONT = 808,
		BODYFONT = 809,
		FIRSTFONT = 801,
		LASTFONT = 809,
		FLATMENUS = 1001,
		FIRSTBOOL = 1001,
		LASTBOOL = 1001,
		SIZINGBORDERWIDTH = 1201,
		SCROLLBARWIDTH = 1202,
		SCROLLBARHEIGHT = 1203,
		CAPTIONBARWIDTH = 1204,
		CAPTIONBARHEIGHT = 1205,
		SMCAPTIONBARWIDTH = 1206,
		SMCAPTIONBARHEIGHT = 1207,
		MENUBARWIDTH = 1208,
		MENUBARHEIGHT = 1209,
		PADDEDBORDERWIDTH = 1210,
		FIRSTSIZE = 1201,
		LASTSIZE = 1210,
		MINCOLORDEPTH = 1301,
		FIRSTINT = 1301,
		LASTINT = 1301,
		CSSNAME = 1401,
		XMLNAME = 1402,
		LASTUPDATED = 1403,
		ALIAS = 1404,
		FIRSTSTRING = 1401,
		LASTSTRING = 1404,
		SCROLLBAR = 1601,
		BACKGROUND = 1602,
		ACTIVECAPTION = 1603,
		INACTIVECAPTION = 1604,
		MENU = 1605,
		WINDOW = 1606,
		WINDOWFRAME = 1607,
		MENUTEXT = 1608,
		WINDOWTEXT = 1609,
		CAPTIONTEXT = 1610,
		ACTIVEBORDER = 1611,
		INACTIVEBORDER = 1612,
		APPWORKSPACE = 1613,
		HIGHLIGHT = 1614,
		HIGHLIGHTTEXT = 1615,
		BTNFACE = 1616,
		BTNSHADOW = 1617,
		GRAYTEXT = 1618,
		BTNTEXT = 1619,
		INACTIVECAPTIONTEXT = 1620,
		BTNHIGHLIGHT = 1621,
		DKSHADOW3D = 1622,
		LIGHT3D = 1623,
		INFOTEXT = 1624,
		INFOBK = 1625,
		BUTTONALTERNATEFACE = 1626,
		HOTTRACKING = 1627,
		GRADIENTACTIVECAPTION = 1628,
		GRADIENTINACTIVECAPTION = 1629,
		MENUHILIGHT = 1630,
		MENUBAR = 1631,
		FIRSTCOLOR = 1601,
		LASTCOLOR = 1631,
		FROMHUE1 = 1801,
		FROMHUE2 = 1802,
		FROMHUE3 = 1803,
		FROMHUE4 = 1804,
		FROMHUE5 = 1805,
		TOHUE1 = 1806,
		TOHUE2 = 1807,
		TOHUE3 = 1808,
		TOHUE4 = 1809,
		TOHUE5 = 1810,
		FROMCOLOR1 = 2001,
		FROMCOLOR2 = 2002,
		FROMCOLOR3 = 2003,
		FROMCOLOR4 = 2004,
		FROMCOLOR5 = 2005,
		TOCOLOR1 = 2006,
		TOCOLOR2 = 2007,
		TOCOLOR3 = 2008,
		TOCOLOR4 = 2009,
		TOCOLOR5 = 2010,
		TRANSPARENT_ = 2201,
		AUTOSIZE = 2202,
		BORDERONLY = 2203,
		COMPOSITED = 2204,
		BGFILL = 2205,
		GLYPHTRANSPARENT = 2206,
		GLYPHONLY = 2207,
		ALWAYSSHOWSIZINGBAR = 2208,
		MIRRORIMAGE = 2209,
		UNIFORMSIZING = 2210,
		INTEGRALSIZING = 2211,
		SOURCEGROW = 2212,
		SOURCESHRINK = 2213,
		DRAWBORDERS = 2214,
		NOETCHEDEFFECT = 2215,
		TEXTAPPLYOVERLAY = 2216,
		TEXTGLOW = 2217,
		TEXTITALIC = 2218,
		COMPOSITEDOPAQUE = 2219,
		LOCALIZEDMIRRORIMAGE = 2220,
		IMAGECOUNT = 2401,
		ALPHALEVEL = 2402,
		BORDERSIZE = 2403,
		ROUNDCORNERWIDTH = 2404,
		ROUNDCORNERHEIGHT = 2405,
		GRADIENTRATIO1 = 2406,
		GRADIENTRATIO2 = 2407,
		GRADIENTRATIO3 = 2408,
		GRADIENTRATIO4 = 2409,
		GRADIENTRATIO5 = 2410,
		PROGRESSCHUNKSIZE = 2411,
		PROGRESSSPACESIZE = 2412,
		SATURATION = 2413,
		TEXTBORDERSIZE = 2414,
		ALPHATHRESHOLD = 2415,
		WIDTH = 2416,
		HEIGHT = 2417,
		GLYPHINDEX = 2418,
		TRUESIZESTRETCHMARK = 2419,
		MINDPI1 = 2420,
		MINDPI2 = 2421,
		MINDPI3 = 2422,
		MINDPI4 = 2423,
		MINDPI5 = 2424,
		TEXTGLOWSIZE = 2425,
		FRAMESPERSECOND = 2426,
		PIXELSPERFRAME = 2427,
		ANIMATIONDELAY = 2428,
		GLOWINTENSITY = 2429,
		OPACITY = 2430,
		COLORIZATIONCOLOR = 2431,
		COLORIZATIONOPACITY = 2432,
		GLYPHFONT = 2601,
		IMAGEFILE = 3001,
		IMAGEFILE1 = 3002,
		IMAGEFILE2 = 3003,
		IMAGEFILE3 = 3004,
		IMAGEFILE4 = 3005,
		IMAGEFILE5 = 3006,
		GLYPHIMAGEFILE = 3008,
		TEXT = 3201,
		CLASSICVALUE = 3202,
		OFFSET = 3401,
		TEXTSHADOWOFFSET = 3402,
		MINSIZE = 3403,
		MINSIZE1 = 3404,
		MINSIZE2 = 3405,
		MINSIZE3 = 3406,
		MINSIZE4 = 3407,
		MINSIZE5 = 3408,
		NORMALSIZE = 3409,
		SIZINGMARGINS = 3601,
		CONTENTMARGINS = 3602,
		CAPTIONMARGINS = 3603,
		BORDERCOLOR = 3801,
		FILLCOLOR = 3802,
		TEXTCOLOR = 3803,
		EDGELIGHTCOLOR = 3804,
		EDGEHIGHLIGHTCOLOR = 3805,
		EDGESHADOWCOLOR = 3806,
		EDGEDKSHADOWCOLOR = 3807,
		EDGEFILLCOLOR = 3808,
		TRANSPARENTCOLOR = 3809,
		GRADIENTCOLOR1 = 3810,
		GRADIENTCOLOR2 = 3811,
		GRADIENTCOLOR3 = 3812,
		GRADIENTCOLOR4 = 3813,
		GRADIENTCOLOR5 = 3814,
		SHADOWCOLOR = 3815,
		GLOWCOLOR = 3816,
		TEXTBORDERCOLOR = 3817,
		TEXTSHADOWCOLOR = 3818,
		GLYPHTEXTCOLOR = 3819,
		GLYPHTRANSPARENTCOLOR = 3820,
		FILLCOLORHINT = 3821,
		BORDERCOLORHINT = 3822,
		ACCENTCOLORHINT = 3823,
		TEXTCOLORHINT = 3824,
		HEADING1TEXTCOLOR = 3825,
		HEADING2TEXTCOLOR = 3826,
		BODYTEXTCOLOR = 3827,
		BGTYPE = 4001,
		BORDERTYPE = 4002,
		FILLTYPE = 4003,
		SIZINGTYPE = 4004,
		HALIGN = 4005,
		CONTENTALIGNMENT = 4006,
		VALIGN = 4007,
		OFFSETTYPE = 4008,
		ICONEFFECT = 4009,
		TEXTSHADOWTYPE = 4010,
		IMAGELAYOUT = 4011,
		GLYPHTYPE = 4012,
		IMAGESELECTTYPE = 4013,
		GLYPHFONTSIZINGTYPE = 4014,
		TRUESIZESCALINGTYPE = 4015,
		USERPICTURE = 5001,
		DEFAULTPANESIZE = 5002,
		BLENDCOLOR = 5003,
		CUSTOMSPLITRECT = 5004,
		ANIMATIONBUTTONRECT = 5005,
		ANIMATIONDURATION = 5006,
		TRANSITIONDURATIONS = 6000,
		SCALEDBACKGROUND = 7001,
		ATLASIMAGE = 8000,
		ATLASINPUTIMAGE = 8001,
		ATLASRECT = 8002
	};
}