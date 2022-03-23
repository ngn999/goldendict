/* This file is (c) 2014 Abs62
 * Part of GoldenDict. Licensed under GPLv3 or later, see the LICENSE file */

#include "epwing_charmap.hh"

namespace Epwing {

EpwingCharmap & EpwingCharmap::instance()
{
  static EpwingCharmap ec;
  return ec;
}

QByteArray EpwingCharmap::mapToUtf8( QString const & code )
{
  if( charMap.contains( code ) )
    return QString( charMap[ code ] ).toUtf8();

  return QByteArray();
}

void EpwingCharmap::addEntry( QString const & code, QChar ch )
{
  charMap[ code ] = ch;
}

EpwingCharmap::EpwingCharmap()
{
  addEntry( "na121", short( 0x00E1 ));
  addEntry( "na122", short( 0x00E0 ));
  addEntry( "na12a", short( 0x01DD ));
  addEntry( "na12e", short( 0x00E9 ));
  addEntry( "na12f", short( 0x00E8 ));
  addEntry( "na134", short( 0x00ED ));
  addEntry( "na135", short( 0x00EC ));
  addEntry( "na136", short( 0x00F3 ));
  addEntry( "na137", short( 0x00F2 ));
  addEntry( "na13e", short( 0x00FA ));
  addEntry( "na13f", short( 0x00F9 ));
  addEntry( "na143", short( 0x00E6 ));
  addEntry( "na144", short( 0x01FD ));
  addEntry( "na149", short( 0x0067 ));
  addEntry( "na157", short( 0x00E9 ));
  addEntry( "na16a", short( 0x00C1 ));
  addEntry( "na16b", short( 0x00C0 ));
  addEntry( "na16d", short( 0x00C9 ));
  addEntry( "na171", short( 0x00FD ));
  addEntry( "na172", short( 0x1EF3 ));
  addEntry( "na17d", short( 0x00DA ));
  addEntry( "na235", short( 0x002F ));
  addEntry( "na240", short( 0x0154 ));
  addEntry( "na244", short( 0x0179 ));
  addEntry( "na627", short( 0x00A7 ));
  addEntry( "na62b", short( 0x00AB ));
  addEntry( "na637", short( 0x30FB ));
  addEntry( "na63b", short( 0x00BB ));
  addEntry( "na646", short( 0x00C6 ));
  addEntry( "na647", short( 0x00C7 ));
  addEntry( "na649", short( 0x00C9 ));
  addEntry( "na660", short( 0x00E0 ));
  addEntry( "na662", short( 0x00E2 ));
  addEntry( "na664", short( 0x00E4 ));
  addEntry( "na667", short( 0x00E7 ));
  addEntry( "na668", short( 0x00E8 ));
  addEntry( "na669", short( 0x00E9 ));
  addEntry( "na66a", short( 0x00EA ));
  addEntry( "na66b", short( 0x00EB ));
  addEntry( "na66e", short( 0x00EE ));
  addEntry( "na66f", short( 0x00EF ));
  addEntry( "na671", short( 0x00F1 ));
  addEntry( "na674", short( 0x00F4 ));
  addEntry( "na676", short( 0x00F6 ));
  addEntry( "na67b", short( 0x00FB ));
  addEntry( "na67c", short( 0x00FC ));
  addEntry( "na722", short( 0x0152 ));
  addEntry( "na723", short( 0x0153 ));
  addEntry( "na73e", short( 0x0101 ));
  addEntry( "na73f", short( 0x0103 ));
  addEntry( "na740", short( 0x0113 ));
  addEntry( "na741", short( 0x0115 ));
  addEntry( "na742", short( 0x012B ));
  addEntry( "na743", short( 0x012D ));
  addEntry( "na744", short( 0x014F ));
  addEntry( "na746", short( 0x016B ));
  addEntry( "na747", short( 0x01D4 ));
  addEntry( "na74b", short( 0x0227 ));
  addEntry( "na753", short( 0x1EBD ));
  addEntry( "na823", short( 0x2026 ));
  addEntry( "wa424", short( 0x00E6 ));
  addEntry( "wa460", short( 0x2460 ));
  addEntry( "wa461", short( 0x2461 ));
  addEntry( "wa462", short( 0x2462 ));
  addEntry( "wa463", short( 0x2463 ));
  addEntry( "wa464", short( 0x2464 ));
}

} // namespace Epwing
