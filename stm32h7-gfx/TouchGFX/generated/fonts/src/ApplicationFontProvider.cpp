/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#include <fonts/ApplicationFontProvider.hpp>
#include <fonts/GeneratedFont.hpp>
#include <texts/TypedTextDatabase.hpp>

touchgfx::Font* ApplicationFontProvider::getFont(touchgfx::FontId typography)
{
    switch (typography)
    {
    case Typography::TYPOGRAPHY_00:
        // NanumBarunGothic_20_2bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[0]);
    case Typography::DEFAULT:
        // verdana_18_2bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[1]);
    case Typography::LARGE:
        // verdana_40_2bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[2]);
    case Typography::SETTINGRESULT:
        // verdana_30_2bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[3]);
    case Typography::SETTINGBTN:
        // verdana_25_2bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[4]);
    case Typography::SETTINGTARGET:
        // NanumBarunGothic_17_2bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[5]);
    case Typography::SETUPFONT:
        // malgun_18_2bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[6]);
    case Typography::SETUPVALUE:
        // malgunbd_30_2bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[7]);
    case Typography::ETC_FONT:
        // verdana_40_2bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[2]);
    case Typography::DISPLAY:
        // NanumBarunGothic_38_2bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[8]);
    case Typography::MODE:
        // NanumBarunGothic_26_2bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[9]);
    case Typography::KEYBOARD:
        // NanumBarunGothic_30_2bpp
        return const_cast<touchgfx::Font*>(TypedTextDatabase::getFonts()[10]);
    default:
        return 0;
    }
}
