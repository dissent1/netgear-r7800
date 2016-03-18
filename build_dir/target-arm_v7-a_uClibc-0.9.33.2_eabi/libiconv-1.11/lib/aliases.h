/* ANSI-C code produced by gperf version 3.0.4 */
/* Command-line: gperf -m 10 lib/aliases.gperf  */
/* Computed positions: -k'4-7,10,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
#error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "lib/aliases.gperf"
struct alias { int name; unsigned int encoding_index; };

#define TOTAL_KEYWORDS 76
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 17
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 90
/* maximum key range = 89, duplicates = 0 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
aliases_hash (register const char *str, register unsigned int len)
{
  static const unsigned char asso_values[] =
    {
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91,  0, 91, 91,  6,  1,
       0,  3, 14,  1, 12, 16,  1, 27, 91, 91,
      91, 91, 91, 91, 91, 13, 47, 24, 25,  5,
      91,  8, 91,  3, 91,  1, 19, 91, 13,  3,
      12, 91,  2, 21,  7, 91, 91, 19,  7, 91,
      91, 91, 91, 91, 91, 31, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91, 91, 91,
      91, 91, 91, 91, 91, 91, 91, 91
    };
  register int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[9]];
      /*FALLTHROUGH*/
      case 9:
      case 8:
      case 7:
        hval += asso_values[(unsigned char)str[6]];
      /*FALLTHROUGH*/
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      /*FALLTHROUGH*/
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      /*FALLTHROUGH*/
      case 3:
      case 2:
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

struct stringpool_t
  {
    char stringpool_str2[sizeof("L2")];
    char stringpool_str3[sizeof("L1")];
    char stringpool_str4[sizeof("GBK")];
    char stringpool_str5[sizeof("UCS-2")];
    char stringpool_str6[sizeof("BIG5")];
    char stringpool_str7[sizeof("UTF-8")];
    char stringpool_str8[sizeof("CHAR")];
    char stringpool_str9[sizeof("UTF-32")];
    char stringpool_str11[sizeof("KOI8-R")];
    char stringpool_str13[sizeof("ISO-8859-2")];
    char stringpool_str14[sizeof("ASCII")];
    char stringpool_str15[sizeof("ISO-8859-1")];
    char stringpool_str16[sizeof("ISO-8859-15")];
    char stringpool_str17[sizeof("ISO-IR-101")];
    char stringpool_str18[sizeof("CSKOI8R")];
    char stringpool_str19[sizeof("CP1250")];
    char stringpool_str20[sizeof("MS-EE")];
    char stringpool_str21[sizeof("ISO-IR-203")];
    char stringpool_str22[sizeof("LATIN2")];
    char stringpool_str23[sizeof("US")];
    char stringpool_str24[sizeof("LATIN1")];
    char stringpool_str25[sizeof("ISO-IR-6")];
    char stringpool_str26[sizeof("GB_2312-80")];
    char stringpool_str27[sizeof("ISO-IR-100")];
    char stringpool_str29[sizeof("GB18030")];
    char stringpool_str31[sizeof("UTF-16")];
    char stringpool_str32[sizeof("CP936")];
    char stringpool_str33[sizeof("UCS-4")];
    char stringpool_str34[sizeof("ISO-10646-UCS-2")];
    char stringpool_str35[sizeof("UTF-32LE")];
    char stringpool_str36[sizeof("UCS-2LE")];
    char stringpool_str37[sizeof("UTF-7")];
    char stringpool_str39[sizeof("ISO8859-2")];
    char stringpool_str40[sizeof("ISO8859-1")];
    char stringpool_str41[sizeof("UCS-2-INTERNAL")];
    char stringpool_str42[sizeof("ISO8859-15")];
    char stringpool_str44[sizeof("ISO_8859-2")];
    char stringpool_str45[sizeof("UTF-16LE")];
    char stringpool_str46[sizeof("ISO_8859-1")];
    char stringpool_str47[sizeof("ISO_8859-15")];
    char stringpool_str48[sizeof("ISO-10646-UCS-4")];
    char stringpool_str49[sizeof("CP367")];
    char stringpool_str50[sizeof("UCS-4LE")];
    char stringpool_str51[sizeof("EUC-TW")];
    char stringpool_str52[sizeof("ISO_8859-15:1998")];
    char stringpool_str53[sizeof("IBM367")];
    char stringpool_str55[sizeof("UCS-4-INTERNAL")];
    char stringpool_str56[sizeof("CSUNICODE11")];
    char stringpool_str57[sizeof("CSUNICODE")];
    char stringpool_str59[sizeof("ANSI_X3.4-1968")];
    char stringpool_str60[sizeof("CP819")];
    char stringpool_str61[sizeof("CSASCII")];
    char stringpool_str62[sizeof("IBM819")];
    char stringpool_str63[sizeof("UTF-32BE")];
    char stringpool_str64[sizeof("UCS-2BE")];
    char stringpool_str65[sizeof("ISO_8859-2:1987")];
    char stringpool_str66[sizeof("ISO_8859-1:1987")];
    char stringpool_str67[sizeof("WCHAR_T")];
    char stringpool_str68[sizeof("ISO646-US")];
    char stringpool_str69[sizeof("UNICODE-1-1")];
    char stringpool_str70[sizeof("ANSI_X3.4-1986")];
    char stringpool_str71[sizeof("UCS-2-SWAPPED")];
    char stringpool_str72[sizeof("US-ASCII")];
    char stringpool_str73[sizeof("UTF-16BE")];
    char stringpool_str75[sizeof("CSUNICODE11UTF7")];
    char stringpool_str77[sizeof("LATIN-9")];
    char stringpool_str78[sizeof("UCS-4BE")];
    char stringpool_str79[sizeof("CSUCS4")];
    char stringpool_str80[sizeof("CSISOLATIN2")];
    char stringpool_str81[sizeof("CSISOLATIN1")];
    char stringpool_str82[sizeof("UNICODELITTLE")];
    char stringpool_str83[sizeof("UNICODEBIG")];
    char stringpool_str85[sizeof("UCS-4-SWAPPED")];
    char stringpool_str86[sizeof("WINDOWS-1250")];
    char stringpool_str88[sizeof("ISO_646.IRV:1991")];
    char stringpool_str90[sizeof("UNICODE-1-1-UTF-7")];
  };
static const struct stringpool_t stringpool_contents =
  {
    "L2",
    "L1",
    "GBK",
    "UCS-2",
    "BIG5",
    "UTF-8",
    "CHAR",
    "UTF-32",
    "KOI8-R",
    "ISO-8859-2",
    "ASCII",
    "ISO-8859-1",
    "ISO-8859-15",
    "ISO-IR-101",
    "CSKOI8R",
    "CP1250",
    "MS-EE",
    "ISO-IR-203",
    "LATIN2",
    "US",
    "LATIN1",
    "ISO-IR-6",
    "GB_2312-80",
    "ISO-IR-100",
    "GB18030",
    "UTF-16",
    "CP936",
    "UCS-4",
    "ISO-10646-UCS-2",
    "UTF-32LE",
    "UCS-2LE",
    "UTF-7",
    "ISO8859-2",
    "ISO8859-1",
    "UCS-2-INTERNAL",
    "ISO8859-15",
    "ISO_8859-2",
    "UTF-16LE",
    "ISO_8859-1",
    "ISO_8859-15",
    "ISO-10646-UCS-4",
    "CP367",
    "UCS-4LE",
    "EUC-TW",
    "ISO_8859-15:1998",
    "IBM367",
    "UCS-4-INTERNAL",
    "CSUNICODE11",
    "CSUNICODE",
    "ANSI_X3.4-1968",
    "CP819",
    "CSASCII",
    "IBM819",
    "UTF-32BE",
    "UCS-2BE",
    "ISO_8859-2:1987",
    "ISO_8859-1:1987",
    "WCHAR_T",
    "ISO646-US",
    "UNICODE-1-1",
    "ANSI_X3.4-1986",
    "UCS-2-SWAPPED",
    "US-ASCII",
    "UTF-16BE",
    "CSUNICODE11UTF7",
    "LATIN-9",
    "UCS-4BE",
    "CSUCS4",
    "CSISOLATIN2",
    "CSISOLATIN1",
    "UNICODELITTLE",
    "UNICODEBIG",
    "UCS-4-SWAPPED",
    "WINDOWS-1250",
    "ISO_646.IRV:1991",
    "UNICODE-1-1-UTF-7"
  };
#define stringpool ((const char *) &stringpool_contents)

static const struct alias aliases[] =
  {
    {-1}, {-1},
#line 66 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str2, ei_iso8859_2},
#line 58 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str3, ei_iso8859_1},
#line 83 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str4, ei_ces_gbk},
#line 24 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str5, ei_ucs2},
#line 86 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str6, ei_ces_big5},
#line 23 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str7, ei_utf8},
#line 80 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str8, ei_local_char},
#line 41 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str9, ei_utf32},
    {-1},
#line 75 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str11, ei_koi8_r},
    {-1},
#line 61 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str13, ei_iso8859_2},
#line 13 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str14, ei_ascii},
#line 51 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str15, ei_iso8859_1},
#line 69 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str16, ei_iso8859_15},
#line 64 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str17, ei_iso8859_2},
#line 76 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str18, ei_koi8_r},
#line 77 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str19, ei_cp1250},
#line 79 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str20, ei_cp1250},
#line 72 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str21, ei_iso8859_15},
#line 65 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str22, ei_iso8859_2},
#line 21 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str23, ei_ascii},
#line 57 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str24, ei_iso8859_1},
#line 16 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str25, ei_ascii},
#line 82 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str26, ei_gb2312},
#line 54 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str27, ei_iso8859_1},
    {-1},
#line 85 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str29, ei_gb18030},
    {-1},
#line 38 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str31, ei_utf16},
#line 84 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str32, ei_cp936},
#line 33 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str33, ei_ucs4},
#line 25 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str34, ei_ucs2},
#line 43 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str35, ei_utf32le},
#line 31 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str36, ei_ucs2le},
#line 44 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str37, ei_utf7},
    {-1},
#line 68 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str39, ei_iso8859_2},
#line 60 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str40, ei_iso8859_1},
#line 47 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str41, ei_ucs2internal},
#line 74 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str42, ei_iso8859_15},
    {-1},
#line 62 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str44, ei_iso8859_2},
#line 40 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str45, ei_utf16le},
#line 52 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str46, ei_iso8859_1},
#line 70 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str47, ei_iso8859_15},
#line 34 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str48, ei_ucs4},
#line 19 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str49, ei_ascii},
#line 37 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str50, ei_ucs4le},
#line 87 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str51, ei_euc_tw},
#line 71 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str52, ei_iso8859_15},
#line 20 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str53, ei_ascii},
    {-1},
#line 49 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str55, ei_ucs4internal},
#line 30 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str56, ei_ucs2be},
#line 26 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str57, ei_ucs2},
    {-1},
#line 17 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str59, ei_ascii},
#line 55 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str60, ei_iso8859_1},
#line 22 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str61, ei_ascii},
#line 56 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str62, ei_iso8859_1},
#line 42 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str63, ei_utf32be},
#line 27 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str64, ei_ucs2be},
#line 63 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str65, ei_iso8859_2},
#line 53 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str66, ei_iso8859_1},
#line 81 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str67, ei_local_wchar_t},
#line 14 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str68, ei_ascii},
#line 29 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str69, ei_ucs2be},
#line 18 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str70, ei_ascii},
#line 48 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str71, ei_ucs2swapped},
#line 12 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str72, ei_ascii},
#line 39 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str73, ei_utf16be},
    {-1},
#line 46 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str75, ei_utf7},
    {-1},
#line 73 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str77, ei_iso8859_15},
#line 36 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str78, ei_ucs4be},
#line 35 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str79, ei_ucs4},
#line 67 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str80, ei_iso8859_2},
#line 59 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str81, ei_iso8859_1},
#line 32 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str82, ei_ucs2le},
#line 28 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str83, ei_ucs2be},
    {-1},
#line 50 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str85, ei_ucs4swapped},
#line 78 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str86, ei_cp1250},
    {-1},
#line 15 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str88, ei_ascii},
    {-1},
#line 45 "lib/aliases.gperf"
    {(int)(long)&((struct stringpool_t *)0)->stringpool_str90, ei_utf7}
  };

#ifdef __GNUC__
__inline
#if defined __GNUC_STDC_INLINE__ || defined __GNUC_GNU_INLINE__
__attribute__ ((__gnu_inline__))
#endif
#endif
const struct alias *
aliases_lookup (register const char *str, register unsigned int len)
{
  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = aliases_hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int o = aliases[key].name;
          if (o >= 0)
            {
              register const char *s = o + stringpool;

              if (*str == *s && !strcmp (str + 1, s + 1))
                return &aliases[key];
            }
        }
    }
  return 0;
}
