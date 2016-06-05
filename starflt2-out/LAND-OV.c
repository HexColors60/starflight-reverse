// ====== OVERLAY 'LAND-OV' ======

#include"cpu.h"

// store offset = 0xf190
// overlay size   = 0x03d0

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x07a1  codep:0xf400 parp:0x07a1 size:0x049e C-string:'UNK_0x07a1'
// 1870:      UNK_0x0c41  codep:0x0257 parp:0x0c41 size:0x01fe C-string:'UNK_0x0c41'
// 1871:      UNK_0x0e41  codep:0xd055 parp:0x0e41 size:0x10fe C-string:'UNK_0x0e41'
// 1872:      UNK_0x1f41  codep:0x2d00 parp:0x1f41 size:0x0012 C-string:'UNK_0x1f41'
// 1873:      UNK_0x1f55  codep:0x161c parp:0x1f55 size:0x00b6 C-string:'UNK_0x1f55'
// 1874:      UNK_0x200d  codep:0x6f59 parp:0x200d size:0x0006 C-string:'UNK_0x200d'
// 1875:      UNK_0x2015  codep:0x2074 parp:0x2015 size:0x0017 C-string:'UNK_0x2015'
// 1876:      UNK_0x202e  codep:0x5343 parp:0x202e size:0x0000 C-string:'UNK_0x202e'
// 1877:      UNK_0x2030  codep:0x4cd0 parp:0x2030 size:0x0014 C-string:'UNK_0x2030'
// 1878:      UNK_0x2046  codep:0x6e6f parp:0x2046 size:0xffffffff C-string:'UNK_0x2046'
// 1879:      UNK_0x2047  codep:0x206e parp:0x2047 size:0x0000 C-string:'UNK_0x2047'
// 1880:      UNK_0x2049  codep:0x6f6e parp:0x2049 size:0xffffffff C-string:'UNK_0x2049'
// 1881:      UNK_0x204a  codep:0x746f parp:0x204a size:0x0002 C-string:'UNK_0x204a'
// 1882:      UNK_0x204e  codep:0x6e69 parp:0x204e size:0xffffffff C-string:'UNK_0x204e'
// 1883:      UNK_0x204f  codep:0x696e parp:0x204f size:0x0000 C-string:'UNK_0x204f'
// 1884:      UNK_0x2051  codep:0x6873 parp:0x2051 size:0xffffffff C-string:'UNK_0x2051'
// 1885:      UNK_0x2052  codep:0x6568 parp:0x2052 size:0x0000 C-string:'UNK_0x2052'
// 1886:      UNK_0x2054  codep:0x9064 parp:0x2054 size:0xffffffff C-string:'UNK_0x2054'
// 1887:      UNK_0x2055  codep:0x1690 parp:0x2055 size:0xffffffff C-string:'UNK_0x2055'
// 1888:      UNK_0x2056  codep:0x4c16 parp:0x2056 size:0x0003 C-string:'UNK_0x2056'
// 1889:      UNK_0x205b  codep:0x0bae parp:0x205b size:0x0cea C-string:'UNK_0x205b'
// 1890:      UNK_0x2d47  codep:0x4f4c parp:0x2d47 size:0x00bc C-string:'UNK_0x2d47'
// 1891:      UNK_0x2e05  codep:0x2020 parp:0x2e05 size:0x0029 C-string:'UNK_0x2e05'
// 1892:      UNK_0x2e30  codep:0x5649 parp:0x2e30 size:0x001c C-string:'UNK_0x2e30'
// 1893:      UNK_0x2e4e  codep:0x2d32 parp:0x2e4e size:0x00a4 C-string:'UNK_0x2e4e'
// 1894:      UNK_0x2ef4  codep:0x7e27 parp:0x2ef4 size:0x0323 C-string:'UNK_0x2ef4'
// 1895:      UNK_0x3219  codep:0xdd45 parp:0x3219 size:0x0030 C-string:'UNK_0x3219'
// 1896:      UNK_0x324b  codep:0x0e7f parp:0x324b size:0x0058 C-string:'UNK_0x324b'
// 1897:      UNK_0x32a5  codep:0x2cb2 parp:0x32a5 size:0x04fa C-string:'UNK_0x32a5'
// 1898:      UNK_0x37a1  codep:0x0e41 parp:0x37a1 size:0x0562 C-string:'UNK_0x37a1'
// 1899:      UNK_0x3d05  codep:0x0e41 parp:0x3d05 size:0x0202 C-string:'UNK_0x3d05'
// 1900:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0x0005 C-string:'UNK_0x3f09'
// 1901:      UNK_0x3f10  codep:0xe70e parp:0x3f10 size:0x00ef C-string:'UNK_0x3f10'
// 1902:      UNK_0x4001  codep:0x9012 parp:0x4001 size:0x0014 C-string:'UNK_0x4001'
// 1903:      UNK_0x4017  codep:0x0622 parp:0x4017 size:0x012c C-string:'UNK_0x4017'
// 1904:      UNK_0x4145  codep:0x4386 parp:0x4145 size:0x0007 C-string:'UNK_0x4145'
// 1905:      UNK_0x414e  codep:0x2ba5 parp:0x414e size:0x0004 C-string:'UNK_0x414e'
// 1906:      UNK_0x4154  codep:0x000c parp:0x4154 size:0x0000 C-string:'UNK_0x4154'
// 1907:      UNK_0x4156  codep:0x0f72 parp:0x4156 size:0x01cf C-string:'UNK_0x4156'
// 1908:      UNK_0x4327  codep:0xb300 parp:0x4327 size:0x0027 C-string:'UNK_0x4327'
// 1909:      UNK_0x4350  codep:0xd70b parp:0x4350 size:0x01c8 C-string:'UNK_0x4350'
// 1910:      UNK_0x451a  codep:0x0bdf parp:0x451a size:0x0028 C-string:'UNK_0x451a'
// 1911:      UNK_0x4544  codep:0x125f parp:0x4544 size:0x0003 C-string:'UNK_0x4544'
// 1912:      UNK_0x4549  codep:0x5f0f parp:0x4549 size:0xffffffff C-string:'UNK_0x4549'
// 1913:      UNK_0x454a  codep:0x125f parp:0x454a size:0x0003 C-string:'UNK_0x454a'
// 1914:      UNK_0x454f  codep:0x0815 parp:0x454f size:0xffffffff C-string:'UNK_0x454f'
// 1915:      UNK_0x4550  codep:0x0008 parp:0x4550 size:0x0002 C-string:'UNK_0x4550'
// 1916:      UNK_0x4554  codep:0x40d2 parp:0x4554 size:0x0000 C-string:'UNK_0x4554'
// 1917:      UNK_0x4556  codep:0x0bdf parp:0x4556 size:0x00ca C-string:'UNK_0x4556'
// 1918:      UNK_0x4622  codep:0x5049 parp:0x4622 size:0x0033 C-string:'UNK_0x4622'
// 1919:      UNK_0x4657  codep:0x6874 parp:0x4657 size:0x00c9 C-string:'UNK_0x4657'
// 1920:      UNK_0x4722  codep:0x0ef2 parp:0x4722 size:0x00fe C-string:'UNK_0x4722'
// 1921:      UNK_0x4822  codep:0x0e32 parp:0x4822 size:0x0021 C-string:'UNK_0x4822'
// 1922:      UNK_0x4845  codep:0xb817 parp:0x4845 size:0x000e C-string:'UNK_0x4845'
// 1923:      UNK_0x4855  codep:0x2995 parp:0x4855 size:0xffffffff C-string:'UNK_0x4855'
// 1924:      UNK_0x4856  codep:0x1d29 parp:0x4856 size:0x00ca C-string:'UNK_0x4856'
// 1925:      UNK_0x4922  codep:0x0db4 parp:0x4922 size:0x0000 C-string:'UNK_0x4922'
// 1926:      UNK_0x4924  codep:0x48ff parp:0x4924 size:0x001f C-string:'UNK_0x4924'
// 1927:      UNK_0x4945  codep:0x3746 parp:0x4945 size:0x0001 C-string:'UNK_0x4945'
// 1928:      UNK_0x4948  codep:0x1660 parp:0x4948 size:0x0000 C-string:'UNK_0x4948'
// 1929:      UNK_0x494a  codep:0xffec parp:0x494a size:0x0009 C-string:'UNK_0x494a'
// 1930:      UNK_0x4955  codep:0x0a22 parp:0x4955 size:0x0001 C-string:'UNK_0x4955'
// 1931:      UNK_0x4958  codep:0x40bb parp:0x4958 size:0x02be C-string:'UNK_0x4958'
// 1932:      UNK_0x4c18  codep:0x48e0 parp:0x4c18 size:0x002d C-string:'UNK_0x4c18'
// 1933:      UNK_0x4c47  codep:0xa24b parp:0x4c47 size:0x0002 C-string:'UNK_0x4c47'
// 1934:      UNK_0x4c4b  codep:0xdf0d parp:0x4c4b size:0x0005 C-string:'UNK_0x4c4b'
// 1935:      UNK_0x4c52  codep:0x0e32 parp:0x4c52 size:0x0003 C-string:'UNK_0x4c52'
// 1936:      UNK_0x4c57  codep:0x600f parp:0x4c57 size:0x00fc C-string:'UNK_0x4c57'
// 1937:      UNK_0x4d55  codep:0x203a parp:0x4d55 size:0x00b7 C-string:'UNK_0x4d55'
// 1938:      UNK_0x4e0e  codep:0x4646 parp:0x4e0e size:0x0033 C-string:'UNK_0x4e0e'
// 1939:      UNK_0x4e43  codep:0x4185 parp:0x4e43 size:0x0002 C-string:'UNK_0x4e43'
// 1940:      UNK_0x4e47  codep:0xd941 parp:0x4e47 size:0x0002 C-string:'UNK_0x4e47'
// 1941:      UNK_0x4e4b  codep:0x064f parp:0x4e4b size:0x0004 C-string:'UNK_0x4e4b'
// 1942:      UNK_0x4e51  codep:0x0db4 parp:0x4e51 size:0x0004 C-string:'UNK_0x4e51'
// 1943:      UNK_0x4e57  codep:0x1f93 parp:0x4e57 size:0x00f5 C-string:'UNK_0x4e57'
// 1944:      UNK_0x4f4e  codep:0x4685 parp:0x4f4e size:0x0006 C-string:'UNK_0x4f4e'
// 1945:      UNK_0x4f56  codep:0x0000 parp:0x4f56 size:0x00ca C-string:'UNK_0x4f56'
// 1946:      UNK_0x5022  codep:0x2d54 parp:0x5022 size:0x001f C-string:'UNK_0x5022'
// 1947:      UNK_0x5043  codep:0x5986 parp:0x5043 size:0x0006 C-string:'UNK_0x5043'
// 1948:      UNK_0x504b  codep:0x0e4f parp:0x504b size:0x01d5 C-string:'UNK_0x504b'
// 1949:      UNK_0x5222  codep:0x29e8 parp:0x5222 size:0x0021 C-string:'UNK_0x5222'
// 1950:      UNK_0x5245  codep:0x4956 parp:0x5245 size:0x0000 C-string:'UNK_0x5245'
// 1951:      UNK_0x5247  codep:0x2d53 parp:0x5247 size:0x0008 C-string:'UNK_0x5247'
// 1952:      UNK_0x5251  codep:0x4c46 parp:0x5251 size:0x0003 C-string:'UNK_0x5251'
// 1953:      UNK_0x5256  codep:0xc349 parp:0x5256 size:0x00d1 C-string:'UNK_0x5256'
// 1954:      UNK_0x5329  codep:0x8553 parp:0x5329 size:0x0018 C-string:'UNK_0x5329'
// 1955:      UNK_0x5343  codep:0x36bf parp:0x5343 size:0x0006 C-string:'UNK_0x5343'
// 1956:      UNK_0x534b  codep:0x74c8 parp:0x534b size:0x0003 C-string:'UNK_0x534b'
// 1957:      UNK_0x5350  codep:0xbfe5 parp:0x5350 size:0x0002 C-string:'UNK_0x5350'
// 1958:      UNK_0x5354  codep:0x2a87 parp:0x5354 size:0x0001 C-string:'UNK_0x5354'
// 1959:      UNK_0x5357  codep:0x5252 parp:0x5357 size:0x0002 C-string:'UNK_0x5357'
// 1960:      UNK_0x535b  codep:0x74d4 parp:0x535b size:0x00c9 C-string:'UNK_0x535b'
// 1961:      UNK_0x5426  codep:0x4655 parp:0x5426 size:0x001f C-string:'UNK_0x5426'
// 1962:      UNK_0x5447  codep:0x3f84 parp:0x5447 size:0x0011 C-string:'UNK_0x5447'
// 1963:      UNK_0x545a  codep:0x5406 parp:0x545a size:0x00ec C-string:'UNK_0x545a'
// 1964:      UNK_0x5548  codep:0x4f50 parp:0x5548 size:0x000b C-string:'UNK_0x5548'
// 1965:      UNK_0x5555  codep:0x454c parp:0x5555 size:0x00f4 C-string:'UNK_0x5555'
// 1966:      UNK_0x564b  codep:0x8956 parp:0x564b size:0x00d5 C-string:'UNK_0x564b'
// 1967:      UNK_0x5722  codep:0xfcff parp:0x5722 size:0x0220 C-string:'UNK_0x5722'
// 1968:      UNK_0x5944  codep:0x5443 parp:0x5944 size:0x0010 C-string:'UNK_0x5944'
// 1969:      UNK_0x5956  codep:0xd452 parp:0x5956 size:0x03aa C-string:'UNK_0x5956'
// 1970:      UNK_0x5d02  codep:0x5386 parp:0x5d02 size:0x0004 C-string:'UNK_0x5d02'
// 1971:      UNK_0x5d08  codep:0x29c7 parp:0x5d08 size:0x000b C-string:'UNK_0x5d08'
// 1972:      UNK_0x5d15  codep:0xd249 parp:0x5d15 size:0x008a C-string:'UNK_0x5d15'
// 1973:      UNK_0x5da1  codep:0x0026 parp:0x5da1 size:0x0b65 C-string:'UNK_0x5da1'
// 1974:      UNK_0x6908  codep:0x080a parp:0x6908 size:0x160b C-string:'UNK_0x6908'
// 1975:      UNK_0x7f15  codep:0xaf16 parp:0x7f15 size:0x0902 C-string:'UNK_0x7f15'
// 1976:      UNK_0x8819  codep:0x5888 parp:0x8819 size:0x080d C-string:'UNK_0x8819'
// 1977:      UNK_0x9028  codep:0xeb26 parp:0x9028 size:0x0068 C-string:'UNK_0x9028'
// 1978:      UNK_0x9092  codep:0x7417 parp:0x9092 size:0x067c C-string:'UNK_0x9092'
// 1979:      UNK_0x9710  codep:0x9449 parp:0x9710 size:0x05f6 C-string:'UNK_0x9710'
// 1980:      UNK_0x9d08  codep:0x1690 parp:0x9d08 size:0x1007 C-string:'UNK_0x9d08'
// 1981:      UNK_0xad11  codep:0xab75 parp:0xad11 size:0x0bfd C-string:'UNK_0xad11'
// 1982:      UNK_0xb910  codep:0x91b8 parp:0xb910 size:0x008f C-string:'UNK_0xb910'
// 1983:      UNK_0xb9a1  codep:0x47b9 parp:0xb9a1 size:0x1881 C-string:'UNK_0xb9a1'
// 1984:      UNK_0xd224  codep:0xc527 parp:0xd224 size:0x0b56 C-string:'UNK_0xd224'
// 1985:      UNK_0xdd7c  codep:0x4025 parp:0xdd7c size:0x0020 C-string:'UNK_0xdd7c'
// 1986:      UNK_0xdd9e  codep:0x1219 parp:0xdd9e size:0x0784 C-string:'UNK_0xdd9e'
// 1987:      UNK_0xe524  codep:0x0010 parp:0xe524 size:0x010a C-string:'UNK_0xe524'
// 1988:      UNK_0xe630  codep:0x0ef2 parp:0xe630 size:0x0015 C-string:'UNK_0xe630'
// 1989:      UNK_0xe647  codep:0xfadd parp:0xe647 size:0x0000 C-string:'UNK_0xe647'
// 1990:      UNK_0xe649  codep:0x0615 parp:0xe649 size:0x01ce C-string:'UNK_0xe649'
// 1991:      UNK_0xe819  codep:0x143d parp:0xe819 size:0x0921 C-string:'UNK_0xe819'
// 1992:      UNK_0xf13c  codep:0x60f0 parp:0xf13c size:0x0017 C-string:'UNK_0xf13c'
// 1993:      UNK_0xf155  codep:0xea7e parp:0xf155 size:0x004f C-string:'UNK_0xf155'
// 1994:      UNK_0xf1a6  codep:0x7420 parp:0xf1a6 size:0x0003 C-string:'UNK_0xf1a6'
// 1995:      UNK_0xf1ab  codep:0x7394 parp:0xf1ab size:0x0006 C-string:'UNK_0xf1ab'
// 1996:      UNK_0xf1b3  codep:0x1d29 parp:0xf1b3 size:0x0002 C-string:'UNK_0xf1b3'
// 1997:      UNK_0xf1b7  codep:0x224c parp:0xf1b7 size:0x002e C-string:'UNK_0xf1b7'
// 1998:      UNK_0xf1e7  codep:0x224c parp:0xf1e7 size:0x0050 C-string:'UNK_0xf1e7'
// 1999:      UNK_0xf239  codep:0x224c parp:0xf239 size:0x0010 C-string:'UNK_0xf239'
// 2000:      UNK_0xf24b  codep:0x224c parp:0xf24b size:0x0014 C-string:'UNK_0xf24b'
// 2001:      UNK_0xf261  codep:0x224c parp:0xf261 size:0x0065 C-string:'UNK_0xf261'
// 2002:      UNK_0xf2c8  codep:0x224c parp:0xf2c8 size:0x00d2 C-string:'UNK_0xf2c8'
// 2003:      UNK_0xf39c  codep:0x224c parp:0xf39c size:0x0014 C-string:'UNK_0xf39c'
// 2004:      UNK_0xf3b2  codep:0x224c parp:0xf3b2 size:0x0037 C-string:'UNK_0xf3b2'
// 2005:      UNK_0xf3eb  codep:0x224c parp:0xf3eb size:0x0020 C-string:'UNK_0xf3eb'
// 2006:      UNK_0xf40d  codep:0x224c parp:0xf40d size:0x0037 C-string:'UNK_0xf40d'
// 2007:      UNK_0xf446  codep:0x224c parp:0xf446 size:0x000a C-string:'UNK_0xf446'
// 2008:      UNK_0xf452  codep:0x224c parp:0xf452 size:0x004c C-string:'UNK_0xf452'
// 2009:      UNK_0xf4a0  codep:0x224c parp:0xf4a0 size:0x002c C-string:'UNK_0xf4a0'
// 2010:      UNK_0xf4ce  codep:0x224c parp:0xf4ce size:0x0036 C-string:'UNK_0xf4ce'
// 2011:           ?LAND  codep:0x224c parp:0xf50e size:0x0018 C-string:'_ask_LAND'
// 2012:         ?LAUNCH  codep:0x224c parp:0xf532 size:0x0571 C-string:'_ask_LAUNCH'
// 2013:      UNK_0xfaa5  codep:0x0000 parp:0xfaa5 size:0xfffffabb C-string:'UNK_0xfaa5'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0x4856[202] = {0x4e, 0x95, 0x00, 0x00, 0xfa, 0x47, 0x84, 0x3f, 0x45, 0x52, 0xd2, 0x4c, 0x22, 0x8f, 0x39, 0xae, 0x0b, 0x2e, 0x0f, 0xf5, 0x12, 0x90, 0x16, 0x4c, 0x22, 0x4c, 0x48, 0xae, 0x0b, 0x50, 0x48, 0xae, 0x0b, 0x54, 0x48, 0xdf, 0x0b, 0x54, 0x48, 0x15, 0x10, 0x1e, 0x13, 0xb3, 0x39, 0xdf, 0x0b, 0x5d, 0x17, 0x03, 0x00, 0x98, 0x39, 0x5e, 0x0c, 0x15, 0x0c, 0xe0, 0x39, 0xdf, 0x0b, 0x54, 0x48, 0xa1, 0x39, 0xdf, 0x0b, 0x5d, 0x17, 0x4b, 0x00, 0x1c, 0x42, 0x90, 0x16, 0x04, 0x46, 0x85, 0x5b, 0x4c, 0x44, 0x53, 0xdd, 0x4c, 0x22, 0x6d, 0x48, 0x61, 0x48, 0x41, 0x0e, 0xfa, 0x15, 0x4a, 0x00, 0x15, 0x41, 0x92, 0x0c, 0x89, 0x12, 0xfa, 0x15, 0x40, 0x00, 0xb4, 0x0d, 0x58, 0x45, 0x15, 0x41, 0x92, 0x0c, 0x15, 0x41, 0x92, 0x0c, 0x8c, 0x45, 0xf0, 0x0d, 0x5f, 0x12, 0x07, 0x13, 0x50, 0x0e, 0xf5, 0x12, 0xfa, 0x15, 0x14, 0x00, 0x15, 0x41, 0x5e, 0x0c, 0x6d, 0x48, 0x61, 0x48, 0x90, 0x0e, 0x32, 0x0e, 0xb4, 0x0d, 0x60, 0x16, 0xdc, 0xff, 0xde, 0x0d, 0x90, 0x0e, 0x41, 0x0e, 0xfa, 0x15, 0x08, 0x00, 0x20, 0x0f, 0x15, 0x41, 0x5e, 0x0c, 0x90, 0x16, 0x29, 0x1d, 0x00, 0x52, 0x32, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x4f, 0x56, 0x4c, 0x00, 0x00, 0x00, 0x00, 0x41, 0xd0, 0x46, 0x85, 0x28, 0x4c, 0x44, 0x53, 0xa9, 0x4c, 0x22, 0xa5, 0x2b, 0xae, 0x0b}; // UNK_0x4856
unsigned char UNK_0xf1b3[2] = {0x00, 0x00}; // UNK_0xf1b3



// 0xf1a2: db 0x3c 0x00 '< '

// ================================================
// 0xf1a4: WORD 'UNK_0xf1a6' codep=0x7420 parp=0xf1a6
// ================================================
// 0xf1a6: db 0x14 0x34 0x0f ' 4 '

// ================================================
// 0xf1a9: WORD 'UNK_0xf1ab' codep=0x7394 parp=0xf1ab
// ================================================
// 0xf1ab: db 0x20 0x02 0x02 0x17 0x49 0x6c '    Il'

// ================================================
// 0xf1b1: WORD 'UNK_0xf1b3' codep=0x1d29 parp=0xf1b3
// ================================================
// 0xf1b3: db 0x00 0x00 '  '

// ================================================
// 0xf1b5: WORD 'UNK_0xf1b7' codep=0x224c parp=0xf1b7
// ================================================

void UNK_0xf1b7() // UNK_0xf1b7
{
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf1ab(); // UNK_0xf1ab
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(0x0320);
  _gt_(); // >
  if (Pop() == 0) goto label1;
  Push(0x0320);
  _minus_(); // -
  Push(0); // 0
  SQRT(); // SQRT
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(0x0320);
  Push(Pop() + Pop()); // +

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf1e5: WORD 'UNK_0xf1e7' codep=0x224c parp=0xf1e7
// ================================================

void UNK_0xf1e7() // UNK_0xf1e7
{
  _star_STARSH(); // *STARSH
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  Push(0x001a);
  Push(cc__6); // 6
  IFIND(); // IFIND
  INST_minus_QT(); // INST-QT
  Push(Read16(Pop())); // @
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xf1b3); // UNK_0xf1b3
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  UNK_0xf1b7(); // UNK_0xf1b7
  Push(0x0028);
  _slash_(); // /
  SWAP(); // SWAP
  OVER(); // OVER
  _minus_(); // -
  Push(0); // 0
  MAX(); // MAX
  INST_minus_QT(); // INST-QT
  _ex_(); // !

  label2:
  CDROP(); // CDROP
  goto label3;

  label1:
  Push(0); // 0

  label3:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf237: WORD 'UNK_0xf239' codep=0x224c parp=0xf239
// ================================================

void UNK_0xf239() // UNK_0xf239
{
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  YELLOW(); // YELLOW
  Push(0x4fa9);
  _ex_(); // !
  CTERASE(); // CTERASE
}


// ================================================
// 0xf249: WORD 'UNK_0xf24b' codep=0x224c parp=0xf24b
// ================================================

void UNK_0xf24b() // UNK_0xf24b
{
  Push(pp_UNK_0xf1b3); // UNK_0xf1b3
  ON(); // ON
  UNK_0xf1e7(); // UNK_0xf1e7
  Pop(); // DROP
  Push(pp_UNK_0xf1b3); // UNK_0xf1b3
  _099(); // 099
  Push(0xb6ec);
  MODULE(); // MODULE
}


// ================================================
// 0xf25f: WORD 'UNK_0xf261' codep=0x224c parp=0xf261
// ================================================

void UNK_0xf261() // UNK_0xf261
{
  CTINIT(); // CTINIT
  UNK_0xf239(); // UNK_0xf239
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4327(); // UNK_0x4327
  UNK_0x5043(); // UNK_0x5043
  UNK_0x4156(); // UNK_0x4156
  UNK_0x4e4b(); // UNK_0x4e4b
  UNK_0x202e(); // UNK_0x202e
  Push(pp_UNK_0x4856); // UNK_0x4856
  UNK_0x2047(); // UNK_0x2047
  UNK_0x4855(); // UNK_0x4855
  UNK_0x504b(); // UNK_0x504b
  UNK_0x4922(); // UNK_0x4922
  UNK_0x2055(); // UNK_0x2055
  UNK_0x4544(); // UNK_0x4544
  UNK_0x4e4b(); // UNK_0x4e4b
  UNK_0x2049(); // UNK_0x2049
  UNK_0x5245(); // UNK_0x5245
  UNK_0x5357(); // UNK_0x5357
  UNK_0x454a(); // UNK_0x454a
  UNK_0x2046(); // UNK_0x2046
  UNK_0x5944(); // UNK_0x5944
  TYPE(); // TYPE
  CTCR(); // CTCR
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x451a(); // UNK_0x451a
  UNK_0x545a(); // UNK_0x545a
  UNK_0x4554(); // UNK_0x4554
  UNK_0x454f(); // UNK_0x454f
  UNK_0x4722(); // UNK_0x4722
  UNK_0x4154(); // UNK_0x4154
  UNK_0x4958(); // UNK_0x4958
  UNK_0x5956(); // UNK_0x5956
  UNK_0x2030(); // UNK_0x2030
  Push(pp_UNK_0x4856); // UNK_0x4856
  UNK_0x2047(); // UNK_0x2047
  UNK_0x2e30(); // UNK_0x2e30
  UNK_0xe630(); // UNK_0xe630
  UNK_0x5d08(); // UNK_0x5d08
  UNK_0x8819(); // UNK_0x8819
  UNK_0x5d15(); // UNK_0x5d15
  UNK_0xe819(); // UNK_0xe819
  UNK_0x2e05(); // UNK_0x2e05
  UNK_0xad11(); // UNK_0xad11
  UNK_0xdd9e(); // UNK_0xdd9e
  UNK_0x32a5(); // UNK_0x32a5
  UNK_0x9710(); // UNK_0x9710
  UNK_0x324b(); // UNK_0x324b
  UNK_0x3f10(); // UNK_0x3f10
  UNK_0x9092(); // UNK_0x9092
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xf2c6: WORD 'UNK_0xf2c8' codep=0x224c parp=0xf2c8
// ================================================
  UNK_0xd224(); // UNK_0xd224

void UNK_0xf2c8() // UNK_0xf2c8
{
  UNK_0x37a1(); // UNK_0x37a1
  UNK_0x2ef4(); // UNK_0x2ef4
  UNK_0x1f55(); // UNK_0x1f55
  UNK_0xdd7c(); // UNK_0xdd7c
  UNK_0x32a5(); // UNK_0x32a5
  UNK_0xb910(); // UNK_0xb910
  UNK_0xb9a1(); // UNK_0xb9a1
  UNK_0x07a1(); // UNK_0x07a1
  UNK_0x1f41(); // UNK_0x1f41
  Push(pp_SIGNEXT); // SIGNEXT
  UNK_0x5247(); // UNK_0x5247
  UNK_0x4549(); // UNK_0x4549
  UNK_0x4350(); // UNK_0x4350
  UNK_0x205b(); // UNK_0x205b
  UNK_0x4f4e(); // UNK_0x4f4e
  UNK_0x4145(); // UNK_0x4145
  UNK_0x4f56(); // UNK_0x4f56
  UNK_0x2054(); // UNK_0x2054
  UNK_0x5256(); // UNK_0x5256
  UNK_0x4e43(); // UNK_0x4e43
  UNK_0x4d55(); // UNK_0x4d55
  UNK_0x534b(); // UNK_0x534b
  UNK_0x4955(); // UNK_0x4955
  UNK_0x4e51(); // UNK_0x4e51
  UNK_0xf13c(); // UNK_0xf13c
  UNK_0x07a1(); // UNK_0x07a1
  UNK_0x0e41(); // UNK_0x0e41
  _star_ASSIGN(); // *ASSIGN
  UNK_0x4156(); // UNK_0x4156
  UNK_0x5354(); // UNK_0x5354
  UNK_0x494a(); // UNK_0x494a
  UNK_0x2052(); // UNK_0x2052
  UNK_0x534b(); // UNK_0x534b
  UNK_0x2055(); // UNK_0x2055
  _dot_TTY(); // .TTY
  UNK_0xf1a6(); // UNK_0xf1a6
  COUNT(); // COUNT
  TYPE(); // TYPE
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x2015(); // UNK_0x2015
  UNK_0x5245(); // UNK_0x5245
  UNK_0x5343(); // UNK_0x5343
  UNK_0x454a(); // UNK_0x454a
  UNK_0x2046(); // UNK_0x2046
  UNK_0x4e51(); // UNK_0x4e51
  UNK_0x5022(); // UNK_0x5022
  UNK_0x414e(); // UNK_0x414e
  UNK_0x4550(); // UNK_0x4550
  UNK_0x2056(); // UNK_0x2056
  _dot_TTY(); // .TTY
  Push(pp__ro_ORBIT_rc_); // (ORBIT)
  _at__gt_C_plus_S(); // @>C+S
  INST_minus_QT(); // INST-QT
  _ask_(); // ?
  ICLOSE(); // ICLOSE
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x200d(); // UNK_0x200d
  UNK_0x4e4b(); // UNK_0x4e4b
  _star_ASSIGN(); // *ASSIGN
  UNK_0x535b(); // UNK_0x535b
  UNK_0x4556(); // UNK_0x4556
  UNK_0x204f(); // UNK_0x204f
  _dot_TTY(); // .TTY
  Push(pp__ro_SYSTEM); // (SYSTEM
  _at__gt_C_plus_S(); // @>C+S
  INST_minus_X(); // INST-X
  Push(Read16(Pop())); // @
  Push(cc__star_MAPSCA); // *MAPSCA
  _slash_(); // /
  Push(0); // 0
  _dot_R(); // .R
  PRINT(",", 1); // (.")
  INST_minus_Y(); // INST-Y
  Push(Read16(Pop())); // @
  Push(cc__star_MAPSCA); // *MAPSCA
  _slash_(); // /
  Push(0); // 0
  _dot_R(); // .R
  ICLOSE(); // ICLOSE
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4e0e(); // UNK_0x4e0e
  UNK_0x2051(); // UNK_0x2051
  UNK_0x5555(); // UNK_0x5555
  Push(pp_A_minus_POSTU); // A-POSTU
  UNK_0x564b(); // UNK_0x564b
  UNK_0x5251(); // UNK_0x5251
  UNK_0xf155(); // UNK_0xf155
  UNK_0xb9a1(); // UNK_0xb9a1
  UNK_0xb9a1(); // UNK_0xb9a1
  UNK_0x5da1(); // UNK_0x5da1
  UNK_0x8819(); // UNK_0x8819
  UNK_0x7f15(); // UNK_0x7f15
  Push(pp_THIS_minus_BU); // THIS-BU
  UNK_0x3219(); // UNK_0x3219
  UNK_0x5d02(); // UNK_0x5d02
  UNK_0xe819(); // UNK_0xe819
  UNK_0x3d05(); // UNK_0x3d05
  UNK_0xad11(); // UNK_0xad11
  UNK_0xdd9e(); // UNK_0xdd9e
  UNK_0xfaa5(); // UNK_0xfaa5
  UNK_0x4017(); // UNK_0x4017
  UNK_0x4001(); // UNK_0x4001
  UNK_0x9092(); // UNK_0x9092
  UNK_0x4c18(); // UNK_0x4c18

// ================================================
// 0xf39a: WORD 'UNK_0xf39c' codep=0x224c parp=0xf39c
// ================================================
  UNK_0xe524(); // UNK_0xe524

void UNK_0xf39c() // UNK_0xf39c
{
  UNK_0xf1e7(); // UNK_0xf1e7
  Push(0x0140);
  MIN(); // MIN
  Push(0x0028);
  Push(Pop() * Pop()); // *
  UNK_0xf1b7(); // UNK_0xf1b7
  _st_(); // <
}


// ================================================
// 0xf3b0: WORD 'UNK_0xf3b2' codep=0x224c parp=0xf3b2
// ================================================

void UNK_0xf3b2() // UNK_0xf3b2
{
  UNK_0xf39c(); // UNK_0xf39c
  DUP(); // DUP
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4924(); // UNK_0x4924
  UNK_0x5350(); // UNK_0x5350
  UNK_0x4657(); // UNK_0x4657
  UNK_0x4948(); // UNK_0x4948
  UNK_0x4945(); // UNK_0x4945
  UNK_0x4e47(); // UNK_0x4e47
  UNK_0x2056(); // UNK_0x2056
  UNK_0x5548(); // UNK_0x5548
  UNK_0x4c47(); // UNK_0x4c47
  UNK_0x4622(); // UNK_0x4622
  UNK_0x5251(); // UNK_0x5251
  _star_ASSIGN(); // *ASSIGN
  _st_ASKMOU(); // <ASKMOU
  UNK_0x2047(); // UNK_0x2047
  UNK_0x414e(); // UNK_0x414e
  _4TH_gt_DOS(); // 4TH>DOS
  UNK_0x4e4b(); // UNK_0x4e4b
  UNK_0xe649(); // UNK_0xe649
  UNK_0x6908(); // UNK_0x6908
  UNK_0x9028(); // UNK_0x9028
}


// ================================================
// 0xf3e9: WORD 'UNK_0xf3eb' codep=0x224c parp=0xf3eb
// ================================================

void UNK_0xf3eb() // UNK_0xf3eb
{
  UNK_0xf1e7(); // UNK_0xf1e7
  Push(0x0140);
  MIN(); // MIN
  DUP(); // DUP
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0x0014);
  Push(Pop() * Pop()); // *
  UNK_0xf1b7(); // UNK_0xf1b7
  _st_(); // <
}


// ================================================
// 0xf40b: WORD 'UNK_0xf40d' codep=0x224c parp=0xf40d
// ================================================

void UNK_0xf40d() // UNK_0xf40d
{
  UNK_0xf3eb(); // UNK_0xf3eb
  DUP(); // DUP
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x4924(); // UNK_0x4924
  UNK_0x5350(); // UNK_0x5350
  UNK_0x4657(); // UNK_0x4657
  UNK_0x4948(); // UNK_0x4948
  UNK_0x4945(); // UNK_0x4945
  UNK_0x4e47(); // UNK_0x4e47
  UNK_0x2056(); // UNK_0x2056
  UNK_0x5548(); // UNK_0x5548
  UNK_0x4c47(); // UNK_0x4c47
  UNK_0x4622(); // UNK_0x4622
  UNK_0x5251(); // UNK_0x5251
  UNK_0x5222(); // UNK_0x5222
  UNK_0x2d47(); // UNK_0x2d47
  UNK_0x414e(); // UNK_0x414e
  UNK_0x4e57(); // UNK_0x4e57
  UNK_0x4845(); // UNK_0x4845
  UNK_0x4e4b(); // UNK_0x4e4b
  UNK_0xe649(); // UNK_0xe649
  UNK_0x6908(); // UNK_0x6908
  UNK_0x9028(); // UNK_0x9028
}


// ================================================
// 0xf444: WORD 'UNK_0xf446' codep=0x224c parp=0xf446
// ================================================

void UNK_0xf446() // UNK_0xf446
{
  UNK_0xf1b7(); // UNK_0xf1b7
  Push(0x031f);
  _gt_(); // >
}


// ================================================
// 0xf450: WORD 'UNK_0xf452' codep=0x224c parp=0xf452
// ================================================

void UNK_0xf452() // UNK_0xf452
{
  UNK_0xf446(); // UNK_0xf446
  DUP(); // DUP
  if (Pop() == 0) return;
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x5426(); // UNK_0x5426
  UNK_0x494a(); // UNK_0x494a
  UNK_0x2055(); // UNK_0x2055
  UNK_0x4c52(); // UNK_0x4c52
  UNK_0x4e43(); // UNK_0x4e43
  UNK_0x5447(); // UNK_0x5447
  UNK_0x5329(); // UNK_0x5329
  UNK_0x4722(); // UNK_0x4722
  UNK_0x4154(); // UNK_0x4154
  UNK_0x4958(); // UNK_0x4958
  UNK_0x5956(); // UNK_0x5956
  UNK_0x5722(); // UNK_0x5722
  UNK_0x4c4b(); // UNK_0x4c4b
  UNK_0x204e(); // UNK_0x204e
  UNK_0x5245(); // UNK_0x5245
  UNK_0x5357(); // UNK_0x5357
  UNK_0x204a(); // UNK_0x204a
  Push(pp_UNK_0x4856); // UNK_0x4856
  UNK_0xe647(); // UNK_0xe647
  UNK_0x9d08(); // UNK_0x9d08
  UNK_0x07a1(); // UNK_0x07a1
  UNK_0x0c41(); // UNK_0x0c41
  UNK_0x4855(); // UNK_0x4855
  UNK_0x504b(); // UNK_0x504b
  UNK_0x5329(); // UNK_0x5329
  UNK_0x4822(); // UNK_0x4822
  UNK_0x4c57(); // UNK_0x4c57
  UNK_0x2e4e(); // UNK_0x2e4e
  TYPE(); // TYPE
  BEEP(); // BEEP
}


// ================================================
// 0xf49e: WORD 'UNK_0xf4a0' codep=0x224c parp=0xf4a0
// ================================================

void UNK_0xf4a0() // UNK_0xf4a0
{
  UNK_0xf39c(); // UNK_0xf39c
  Push(pp__ask_FUEL_minus_D); // ?FUEL-D
  _ex_(); // !
  Push(cc__minus_1); // -1
  Push(pp_GWF); // GWF
  _ex_(); // !
  UNK_0xf24b(); // UNK_0xf24b
  Push(0xbd55);
  MODULE(); // MODULE
  Push(pp__ask_FUEL_minus_D); // ?FUEL-D
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xf2c8(); // UNK_0xf2c8
  return;

  label1:
  UNK_0xf446(); // UNK_0xf446
  if (Pop() == 0) return;
  UNK_0xf261(); // UNK_0xf261
}


// ================================================
// 0xf4cc: WORD 'UNK_0xf4ce' codep=0x224c parp=0xf4ce
// ================================================

void UNK_0xf4ce() // UNK_0xf4ce
{
  Push(pp_GWF); // GWF
  Push(Read16(Pop())); // @
  _ask_DUP(); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xf452(); // UNK_0xf452
  if (Pop() == 0) goto label1;
  Push(pp_GWF); // GWF
  ON(); // ON
  goto label3;

  label1:
  UNK_0xf3b2(); // UNK_0xf3b2
  if (Pop() == 0) goto label2;
  Push(pp_GWF); // GWF
  ON(); // ON
  goto label3;

  label2:
  UNK_0xf40d(); // UNK_0xf40d
  Push(pp_GWF); // GWF
  _ex_(); // !

  label3:
  Push(pp_GWF); // GWF
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf504: WORD '?LAND' codep=0x224c parp=0xf50e
// ================================================

void _ask_LAND() // ?LAND
{
  Push(pp__ask_G_minus_AWAR); // ?G-AWAR
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xf4ce(); // UNK_0xf4ce
  if (Pop() == 0) goto label2;
  UNK_0xf4a0(); // UNK_0xf4a0

  label2:
  return;

  label1:
  UNK_0xf4a0(); // UNK_0xf4a0
}


// ================================================
// 0xf526: WORD '?LAUNCH' codep=0x224c parp=0xf532
// ================================================

void _ask_LAUNCH() // ?LAUNCH
{
  UNK_0xf40d(); // UNK_0xf40d
  if (Pop() == 0) Push(1); else Push(0); // NOT
  DUP(); // DUP
  if (Pop() == 0) return;
  UNK_0xf24b(); // UNK_0xf24b
}

// 0xf540: db 0x4c 0x41 0x4e 0x44 0x2d 0x56 0x4f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'LAND-VO_________________________ '
  