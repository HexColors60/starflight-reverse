// ====== OVERLAY 'GAME-OV' ======
// store offset = 0xde40
// overlay size   = 0x1720

#include"cpu.h"
#include"starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0x3f3b  codep:0x224c parp:0x3f3b size:0x9f1d C-string:'UNK_0x3f3b'
// 1704:      UNK_0xde5a  codep:0x2214 parp:0xde5a size:0x0002 C-string:'UNK_0xde5a'
// 1705:      UNK_0xde5e  codep:0x2214 parp:0xde5e size:0x0002 C-string:'UNK_0xde5e'
// 1706:      UNK_0xde62  codep:0x2214 parp:0xde62 size:0x0002 C-string:'UNK_0xde62'
// 1707:      UNK_0xde66  codep:0x2214 parp:0xde66 size:0x0002 C-string:'UNK_0xde66'
// 1708:      UNK_0xde6a  codep:0x2214 parp:0xde6a size:0x000a C-string:'UNK_0xde6a'
// 1709:      UNK_0xde76  codep:0x2214 parp:0xde76 size:0x0002 C-string:'UNK_0xde76'
// 1710:      UNK_0xde7a  codep:0x2214 parp:0xde7a size:0x0002 C-string:'UNK_0xde7a'
// 1711:      UNK_0xde7e  codep:0x2214 parp:0xde7e size:0x0002 C-string:'UNK_0xde7e'
// 1712:          RESUME  codep:0x1d29 parp:0xde82 size:0x0002 C-string:'RESUME'
// 1713:      UNK_0xde86  codep:0x1d29 parp:0xde86 size:0x00e2 C-string:'UNK_0xde86'
// 1714:      UNK_0xdf6a  codep:0x1d29 parp:0xdf6a size:0x0002 C-string:'UNK_0xdf6a'
// 1715:      UNK_0xdf6e  codep:0x1d29 parp:0xdf6e size:0x0002 C-string:'UNK_0xdf6e'
// 1716:      UNK_0xdf72  codep:0x1d29 parp:0xdf72 size:0x0002 C-string:'UNK_0xdf72'
// 1717:      UNK_0xdf76  codep:0x1d29 parp:0xdf76 size:0x0002 C-string:'UNK_0xdf76'
// 1718:      UNK_0xdf7a  codep:0x1d29 parp:0xdf7a size:0x0002 C-string:'UNK_0xdf7a'
// 1719:      UNK_0xdf7e  codep:0x1d29 parp:0xdf7e size:0x0002 C-string:'UNK_0xdf7e'
// 1720:      UNK_0xdf82  codep:0x1d29 parp:0xdf82 size:0x0002 C-string:'UNK_0xdf82'
// 1721:      UNK_0xdf86  codep:0x1d29 parp:0xdf86 size:0x0002 C-string:'UNK_0xdf86'
// 1722:      UNK_0xdf8a  codep:0x1d29 parp:0xdf8a size:0x0002 C-string:'UNK_0xdf8a'
// 1723:      UNK_0xdf8e  codep:0x1d29 parp:0xdf8e size:0x0002 C-string:'UNK_0xdf8e'
// 1724:      UNK_0xdf92  codep:0x1d29 parp:0xdf92 size:0x0006 C-string:'UNK_0xdf92'
// 1725:      UNK_0xdf9a  codep:0x1d29 parp:0xdf9a size:0x0002 C-string:'UNK_0xdf9a'
// 1726:      UNK_0xdf9e  codep:0x1d29 parp:0xdf9e size:0x0002 C-string:'UNK_0xdf9e'
// 1727:      UNK_0xdfa2  codep:0x1d29 parp:0xdfa2 size:0x0002 C-string:'UNK_0xdfa2'
// 1728:      UNK_0xdfa6  codep:0x1d29 parp:0xdfa6 size:0x0002 C-string:'UNK_0xdfa6'
// 1729:      UNK_0xdfaa  codep:0x2214 parp:0xdfaa size:0x0002 C-string:'UNK_0xdfaa'
// 1730:      UNK_0xdfae  codep:0x2214 parp:0xdfae size:0x0002 C-string:'UNK_0xdfae'
// 1731:            HOST  codep:0x5275 parp:0xdfb9 size:0x0016 C-string:'HOST'
// 1732:    VECTORERRORS  codep:0x5275 parp:0xdfda size:0x0024 C-string:'VECTORERRORS'
// 1733:      UNK_0xe000  codep:0x1d29 parp:0xe000 size:0x0010 C-string:'UNK_0xe000'
// 1734:      UNK_0xe012  codep:0x224c parp:0xe012 size:0x0012 C-string:'UNK_0xe012'
// 1735:      UNK_0xe026  codep:0x224c parp:0xe026 size:0x0034 C-string:'UNK_0xe026'
// 1736:      SET.COLORS  codep:0x224c parp:0xe05c size:0x0010 C-string:'SET_dot_COLORS'
// 1737:      UNK_0xe06e  codep:0x1d29 parp:0xe06e size:0x0026 C-string:'UNK_0xe06e'
// 1738:      UNK_0xe096  codep:0x224c parp:0xe096 size:0x0006 C-string:'UNK_0xe096'
// 1739:      UNK_0xe09e  codep:0x224c parp:0xe09e size:0x0006 C-string:'UNK_0xe09e'
// 1740:      UNK_0xe0a6  codep:0x224c parp:0xe0a6 size:0x0006 C-string:'UNK_0xe0a6'
// 1741:      UNK_0xe0ae  codep:0x224c parp:0xe0ae size:0x0006 C-string:'UNK_0xe0ae'
// 1742:      UNK_0xe0b6  codep:0x224c parp:0xe0b6 size:0x0042 C-string:'UNK_0xe0b6'
// 1743:      UNK_0xe0fa  codep:0x224c parp:0xe0fa size:0x000a C-string:'UNK_0xe0fa'
// 1744:      UNK_0xe106  codep:0x1d29 parp:0xe106 size:0x0002 C-string:'UNK_0xe106'
// 1745:      UNK_0xe10a  codep:0x1d29 parp:0xe10a size:0x0002 C-string:'UNK_0xe10a'
// 1746:            ?HUB  codep:0x224c parp:0xe115 size:0x0018 C-string:'_ask_HUB'
// 1747:          SETHID  codep:0x224c parp:0xe138 size:0x000a C-string:'SETHID'
// 1748:          SETDIS  codep:0x224c parp:0xe14d size:0x0008 C-string:'SETDIS'
// 1749:          SCR>CG  codep:0x224c parp:0xe160 size:0x0050 C-string:'SCR_gt_CG'
// 1750:      UNK_0xe1b2  codep:0x224c parp:0xe1b2 size:0x000a C-string:'UNK_0xe1b2'
// 1751:      UNK_0xe1be  codep:0x224c parp:0xe1be size:0x0016 C-string:'UNK_0xe1be'
// 1752:      UNK_0xe1d6  codep:0x224c parp:0xe1d6 size:0x001c C-string:'UNK_0xe1d6'
// 1753:      UNK_0xe1f4  codep:0x224c parp:0xe1f4 size:0x0016 C-string:'UNK_0xe1f4'
// 1754:      UNK_0xe20c  codep:0x224c parp:0xe20c size:0x0040 C-string:'UNK_0xe20c'
// 1755:      UNK_0xe24e  codep:0x224c parp:0xe24e size:0x0028 C-string:'UNK_0xe24e'
// 1756:      UNK_0xe278  codep:0x224c parp:0xe278 size:0x003c C-string:'UNK_0xe278'
// 1757:      UNK_0xe2b6  codep:0x224c parp:0xe2b6 size:0x000e C-string:'UNK_0xe2b6'
// 1758:      UNK_0xe2c6  codep:0x224c parp:0xe2c6 size:0x006c C-string:'UNK_0xe2c6'
// 1759:      UNK_0xe334  codep:0x224c parp:0xe334 size:0x000a C-string:'UNK_0xe334'
// 1760:      UNK_0xe340  codep:0x224c parp:0xe340 size:0x0034 C-string:'UNK_0xe340'
// 1761:      UNK_0xe376  codep:0x224c parp:0xe376 size:0x001c C-string:'UNK_0xe376'
// 1762:      UNK_0xe394  codep:0x224c parp:0xe394 size:0x001a C-string:'UNK_0xe394'
// 1763:      UNK_0xe3b0  codep:0x224c parp:0xe3b0 size:0x000a C-string:'UNK_0xe3b0'
// 1764:      UNK_0xe3bc  codep:0x224c parp:0xe3bc size:0x0112 C-string:'UNK_0xe3bc'
// 1765:        .GAMEOPS  codep:0x224c parp:0xe4d0 size:0x00c7 C-string:'_dot_GAMEOPS'
// 1766:      UNK_0xe599  codep:0x224c parp:0xe599 size:0x0026 C-string:'UNK_0xe599'
// 1767:      UNK_0xe5c1  codep:0x224c parp:0xe5c1 size:0x0026 C-string:'UNK_0xe5c1'
// 1768:      UNK_0xe5e9  codep:0x224c parp:0xe5e9 size:0x0032 C-string:'UNK_0xe5e9'
// 1769:      UNK_0xe61d  codep:0x224c parp:0xe61d size:0x0020 C-string:'UNK_0xe61d'
// 1770:      UNK_0xe63f  codep:0x224c parp:0xe63f size:0x0006 C-string:'UNK_0xe63f'
// 1771:      UNK_0xe647  codep:0x224c parp:0xe647 size:0x0006 C-string:'UNK_0xe647'
// 1772:      UNK_0xe64f  codep:0x224c parp:0xe64f size:0x0008 C-string:'UNK_0xe64f'
// 1773:      UNK_0xe659  codep:0x224c parp:0xe659 size:0x0014 C-string:'UNK_0xe659'
// 1774:      UNK_0xe66f  codep:0x224c parp:0xe66f size:0x011b C-string:'UNK_0xe66f'
// 1775:      UNK_0xe78c  codep:0x224c parp:0xe78c size:0x0028 C-string:'UNK_0xe78c'
// 1776:      UNK_0xe7b6  codep:0x224c parp:0xe7b6 size:0x0036 C-string:'UNK_0xe7b6'
// 1777:      UNK_0xe7ee  codep:0x224c parp:0xe7ee size:0x0034 C-string:'UNK_0xe7ee'
// 1778:      UNK_0xe824  codep:0x224c parp:0xe824 size:0x0047 C-string:'UNK_0xe824'
// 1779:             GDE  codep:0x224c parp:0xe86d size:0x0012 C-string:'GDE'
// 1780:       .RESUMING  codep:0x224c parp:0xe881 size:0x002d C-string:'_dot_RESUMING'
// 1781:      UNK_0xe8b0  codep:0x224c parp:0xe8b0 size:0x0008 C-string:'UNK_0xe8b0'
// 1782:          SCR>EG  codep:0x224c parp:0xe8c3 size:0x0076 C-string:'SCR_gt_EG'
// 1783:  RESTOREDISPLAY  codep:0x224c parp:0xe93b size:0x002a C-string:'RESTOREDISPLAY'
// 1784: PRESERVEDISPLAY  codep:0x224c parp:0xe967 size:0x0028 C-string:'PRESERVEDISPLAY'
// 1785:      ESCDISABLE  codep:0x224c parp:0xe991 size:0x0006 C-string:'ESCDISABLE'
// 1786:       ESCENABLE  codep:0x224c parp:0xe999 size:0x0006 C-string:'ESCENABLE'
// 1787:        OFFCACHE  codep:0x224c parp:0xe9a1 size:0x0008 C-string:'OFFCACHE'
// 1788:         ONCACHE  codep:0x224c parp:0xe9ab size:0x000c C-string:'ONCACHE'
// 1789:      UNK_0xe9b9  codep:0x224c parp:0xe9b9 size:0x001a C-string:'UNK_0xe9b9'
// 1790:      NEWDOSMSGS  codep:0x224c parp:0xe9d5 size:0x0012 C-string:'NEWDOSMSGS'
// 1791:      UNK_0xe9e9  codep:0x224c parp:0xe9e9 size:0x0008 C-string:'UNK_0xe9e9'
// 1792:      UNK_0xe9f3  codep:0x224c parp:0xe9f3 size:0x001c C-string:'UNK_0xe9f3'
// 1793:      UNK_0xea11  codep:0x224c parp:0xea11 size:0x0014 C-string:'UNK_0xea11'
// 1794:        PUSHVECT  codep:0x224c parp:0xea27 size:0x0028 C-string:'PUSHVECT'
// 1795:         POPVECT  codep:0x224c parp:0xea51 size:0x0034 C-string:'POPVECT'
// 1796:      UNK_0xea87  codep:0x224c parp:0xea87 size:0x003e C-string:'UNK_0xea87'
// 1797:      UNK_0xeac7  codep:0x224c parp:0xeac7 size:0x0025 C-string:'UNK_0xeac7'
// 1798:      UNK_0xeaee  codep:0x224c parp:0xeaee size:0x0031 C-string:'UNK_0xeaee'
// 1799:      UNK_0xeb21  codep:0x224c parp:0xeb21 size:0x001e C-string:'UNK_0xeb21'
// 1800:          PRMSAV  codep:0xeb4a parp:0xeb4a size:0x001d C-string:'PRMSAV'
// 1801:          PRMLOD  codep:0xeb72 parp:0xeb72 size:0x002d C-string:'PRMLOD'
// 1802:          RETSAV  codep:0xebaa parp:0xebaa size:0x001d C-string:'RETSAV'
// 1803:          RETJMP  codep:0xebd2 parp:0xebd2 size:0x0028 C-string:'RETJMP'
// 1804:      UNK_0xebfc  codep:0x224c parp:0xebfc size:0x0082 C-string:'UNK_0xebfc'
// 1805:      UNK_0xec80  codep:0x224c parp:0xec80 size:0x0006 C-string:'UNK_0xec80'
// 1806:      UNK_0xec88  codep:0x224c parp:0xec88 size:0x0006 C-string:'UNK_0xec88'
// 1807:      UNK_0xec90  codep:0x224c parp:0xec90 size:0x000c C-string:'UNK_0xec90'
// 1808:      UNK_0xec9e  codep:0x224c parp:0xec9e size:0x0014 C-string:'UNK_0xec9e'
// 1809:      UNK_0xecb4  codep:0x224c parp:0xecb4 size:0x000c C-string:'UNK_0xecb4'
// 1810:      UNK_0xecc2  codep:0x224c parp:0xecc2 size:0x000e C-string:'UNK_0xecc2'
// 1811:      UNK_0xecd2  codep:0x224c parp:0xecd2 size:0x000c C-string:'UNK_0xecd2'
// 1812:      UNK_0xece0  codep:0x224c parp:0xece0 size:0x000c C-string:'UNK_0xece0'
// 1813:      UNK_0xecee  codep:0x224c parp:0xecee size:0x000a C-string:'UNK_0xecee'
// 1814:      UNK_0xecfa  codep:0x224c parp:0xecfa size:0x000c C-string:'UNK_0xecfa'
// 1815:      UNK_0xed08  codep:0x224c parp:0xed08 size:0x000c C-string:'UNK_0xed08'
// 1816:      UNK_0xed16  codep:0x224c parp:0xed16 size:0x000a C-string:'UNK_0xed16'
// 1817:      UNK_0xed22  codep:0x224c parp:0xed22 size:0x000e C-string:'UNK_0xed22'
// 1818:      UNK_0xed32  codep:0x224c parp:0xed32 size:0x000a C-string:'UNK_0xed32'
// 1819:      UNK_0xed3e  codep:0x224c parp:0xed3e size:0x0008 C-string:'UNK_0xed3e'
// 1820:      UNK_0xed48  codep:0x224c parp:0xed48 size:0x0020 C-string:'UNK_0xed48'
// 1821:      UNK_0xed6a  codep:0x224c parp:0xed6a size:0x0006 C-string:'UNK_0xed6a'
// 1822:      UNK_0xed72  codep:0x224c parp:0xed72 size:0x001e C-string:'UNK_0xed72'
// 1823:      UNK_0xed92  codep:0x224c parp:0xed92 size:0x000e C-string:'UNK_0xed92'
// 1824:      UNK_0xeda2  codep:0x224c parp:0xeda2 size:0x0014 C-string:'UNK_0xeda2'
// 1825:      UNK_0xedb8  codep:0x224c parp:0xedb8 size:0x0022 C-string:'UNK_0xedb8'
// 1826:      UNK_0xeddc  codep:0x224c parp:0xeddc size:0x002e C-string:'UNK_0xeddc'
// 1827:       LOAD.GAME  codep:0x224c parp:0xee15 size:0x0022 C-string:'LOAD_dot_GAME'
// 1828:      UNK_0xee39  codep:0x224c parp:0xee39 size:0x0028 C-string:'UNK_0xee39'
// 1829:      UNK_0xee63  codep:0x224c parp:0xee63 size:0x0016 C-string:'UNK_0xee63'
// 1830:      UNK_0xee7b  codep:0x224c parp:0xee7b size:0x001c C-string:'UNK_0xee7b'
// 1831:      UNK_0xee99  codep:0x224c parp:0xee99 size:0x0016 C-string:'UNK_0xee99'
// 1832:      UNK_0xeeb1  codep:0x224c parp:0xeeb1 size:0x0032 C-string:'UNK_0xeeb1'
// 1833:      UNK_0xeee5  codep:0x224c parp:0xeee5 size:0x006a C-string:'UNK_0xeee5'
// 1834: SET.DISPLAY.MODE  codep:0x224c parp:0xef5a size:0x010d C-string:'SET_dot_DISPLAY_dot_MODE'
// 1835:      UNK_0xf069  codep:0x224c parp:0xf069 size:0x003a C-string:'UNK_0xf069'
// 1836:  POLICE.WARNING  codep:0x224c parp:0xf0ae size:0x03c4 C-string:'POLICE_dot_WARNING'
// 1837:          NEW.GA  codep:0x224c parp:0xf47d size:0x0016 C-string:'NEW_dot_GA'
// 1838:     GET-OPTION#  codep:0x224c parp:0xf495 size:0x0022 C-string:'GET_dash_OPTION_n_'
// 1839:      UNK_0xf4b9  codep:0x224c parp:0xf4b9 size:0x0006 C-string:'UNK_0xf4b9'
// 1840:      GAMEOPCASE  codep:0x4a4f parp:0xf4ca size:0x0010 C-string:'GAMEOPCASE'
// 1841:    >GAMEOPTIONS  codep:0x224c parp:0xf4dc size:0x000e C-string:'_gt_GAMEOPTIONS'
// 1842:     GAMEOPTIONS  codep:0x224c parp:0xf4ec size:0x0016 C-string:'GAMEOPTIONS'
// 1843:    <GAMEOPTIONS  codep:0x224c parp:0xf504 size:0x000e C-string:'_st_GAMEOPTIONS'
// 1844:         GAMEOPS  codep:0x224c parp:0xf51d size:0x0008 C-string:'GAMEOPS'
// 1845:      UNK_0xf527  codep:0x224c parp:0xf527 size:0x0006 C-string:'UNK_0xf527'
// 1846:      START.GAME  codep:0x224c parp:0xf538 size:0x0000 C-string:'START_dot_GAME'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char RESUME[2] = {0x01, 0x00}; // RESUME
unsigned char UNK_0xde86[226] = {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x0c, 0x50, 0x0e, 0x6e, 0x0e, 0x32, 0x30, 0x37, 0x34, 0x92, 0x0c, 0xf0, 0x0d, 0x3d, 0x0f, 0x5c, 0x15, 0xe8, 0xff, 0x90, 0x0e, 0x32, 0x0e, 0xb4, 0x0d, 0xb4, 0x0d, 0x3d, 0x90, 0x3d, 0x90, 0x90, 0x0e, 0x90, 0x0e, 0x3d, 0x90, 0x83, 0x3b, 0xef, 0x2a, 0x90, 0x16, 0x4c, 0x22, 0x8b, 0x3b, 0x20, 0x35, 0x32, 0x30, 0x37, 0x35, 0x50, 0x0e, 0x72, 0x0f, 0x92, 0x0c, 0x7f, 0x0e, 0x50, 0x0e, 0x72, 0x0f, 0xc3, 0x4b, 0x72, 0x0f, 0x41, 0x0e, 0x50, 0x0e, 0x3d, 0x0f, 0x9f, 0x11, 0xfa, 0x15, 0x08, 0x00, 0x68, 0xde, 0x60, 0x16, 0x04, 0x00, 0x62, 0xde, 0x57, 0x40, 0x07, 0x13, 0xfa, 0x15, 0x3c, 0x00, 0x7f, 0x0e, 0x50, 0x0e, 0x72, 0x0f, 0x41, 0x0e, 0x92, 0x0c, 0xc6, 0x11, 0x41, 0x0e, 0xb3, 0x0e, 0x6a, 0x6d, 0x05, 0x10, 0x72, 0x0f, 0x20, 0x0f, 0x5d, 0x17, 0x64, 0x00, 0xd8, 0x4a, 0x5d, 0x17, 0x0a, 0x00, 0x46, 0x12, 0xfa, 0x15, 0x14, 0x00, 0x2e, 0x0f, 0x5d, 0x17, 0x10, 0x00, 0xd8, 0x4a, 0x41, 0x0e, 0x47, 0x49, 0x72, 0x0f, 0x6e, 0xde, 0x76, 0x6d, 0x73, 0x3b, 0xae, 0x3f, 0x50, 0x0e, 0x72, 0x0f, 0x6a, 0x6d, 0xd0, 0x15, 0x8c, 0xff, 0xde, 0x0d, 0x90, 0x16, 0x4c, 0x22, 0x8b, 0x3b, 0x20, 0x0f, 0xb8, 0x15, 0x00, 0x00, 0xc6, 0x4b, 0x45, 0x59, 0x49, 0x4e, 0xc3, 0xa0, 0x3c, 0x34, 0xe5, 0x46, 0xdf, 0xc5, 0x44, 0x58, 0x43, 0x52, 0xd3, 0xa0, 0x3c, 0x38, 0xe5, 0x53, 0xdf, 0xc5, 0x44, 0x59, 0x43, 0x52, 0x29, 0x1d, 0x3a, 0x20}; // UNK_0xde86
unsigned char UNK_0xdf6a[2] = {0x3a, 0x20}; // UNK_0xdf6a
unsigned char UNK_0xdf6e[2] = {0x14, 0x00}; // UNK_0xdf6e
unsigned char UNK_0xdf72[2] = {0x8c, 0x00}; // UNK_0xdf72
unsigned char UNK_0xdf76[2] = {0x96, 0x00}; // UNK_0xdf76
unsigned char UNK_0xdf7a[2] = {0x28, 0x00}; // UNK_0xdf7a
unsigned char UNK_0xdf7e[2] = {0x09, 0x00}; // UNK_0xdf7e
unsigned char UNK_0xdf82[2] = {0x06, 0x00}; // UNK_0xdf82
unsigned char UNK_0xdf86[2] = {0x03, 0x00}; // UNK_0xdf86
unsigned char UNK_0xdf8a[2] = {0x14, 0x00}; // UNK_0xdf8a
unsigned char UNK_0xdf8e[2] = {0x09, 0x00}; // UNK_0xdf8e
unsigned char UNK_0xdf92[6] = {0x84, 0xe8, 0x29, 0x1d, 0x3a, 0x20}; // UNK_0xdf92
unsigned char UNK_0xdf9a[2] = {0x02, 0x00}; // UNK_0xdf9a
unsigned char UNK_0xdf9e[2] = {0x99, 0xe8}; // UNK_0xdf9e
unsigned char UNK_0xdfa2[2] = {0x0b, 0x00}; // UNK_0xdfa2
unsigned char UNK_0xdfa6[2] = {0x3a, 0x20}; // UNK_0xdfa6
unsigned char UNK_0xe000[16] = {0x00, 0x02, 0x01, 0x0b, 0x04, 0x08, 0x05, 0x09, 0x06, 0x0a, 0x07, 0x03, 0x0c, 0x0e, 0x0d, 0x0f}; // UNK_0xe000
unsigned char UNK_0xe06e[38] = {0x20, 0x00, 0x4c, 0x22, 0x68, 0xe0, 0x76, 0x6d, 0x6c, 0xe0, 0xc5, 0x6d, 0x90, 0x16, 0x4c, 0x22, 0x68, 0xe0, 0xae, 0x0b, 0x6c, 0xe0, 0xae, 0x0b, 0x72, 0x0f, 0xf2, 0x0e, 0x41, 0x0e, 0x6c, 0xe0, 0x83, 0x6d, 0xea, 0x6d, 0x90, 0x16}; // UNK_0xe06e
unsigned char UNK_0xe106[2] = {0xfe, 0x11}; // UNK_0xe106
unsigned char UNK_0xe10a[2] = {0x00, 0x00}; // UNK_0xe10a

const unsigned short int cc_UNK_0xde5a = 0x003d; // UNK_0xde5a
const unsigned short int cc_UNK_0xde5e = 0x0070; // UNK_0xde5e
const unsigned short int cc_UNK_0xde62 = 0x0080; // UNK_0xde62
const unsigned short int cc_UNK_0xde66 = 0x0081; // UNK_0xde66
const unsigned short int cc_UNK_0xde6a = 0x0082; // UNK_0xde6a
const unsigned short int cc_UNK_0xde76 = 0x4000; // UNK_0xde76
const unsigned short int cc_UNK_0xde7a = 0x0400; // UNK_0xde7a
const unsigned short int cc_UNK_0xde7e = 0x3a48; // UNK_0xde7e
const unsigned short int cc_UNK_0xdfaa = 0x000b; // UNK_0xdfaa
const unsigned short int cc_UNK_0xdfae = 0x0012; // UNK_0xdfae


// 0xde52: db 0x72 0x01 0x14 0x22 0x3d 0x00 'r  "= '

// ================================================
// 0xde58: WORD 'UNK_0xde5a' codep=0x2214 parp=0xde5a
// ================================================
// 0xde5a: db 0x3d 0x00 '= '

// ================================================
// 0xde5c: WORD 'UNK_0xde5e' codep=0x2214 parp=0xde5e
// ================================================
// 0xde5e: db 0x70 0x00 'p '

// ================================================
// 0xde60: WORD 'UNK_0xde62' codep=0x2214 parp=0xde62
// ================================================
// 0xde62: db 0x80 0x00 '  '

// ================================================
// 0xde64: WORD 'UNK_0xde66' codep=0x2214 parp=0xde66
// ================================================
// 0xde66: db 0x81 0x00 '  '

// ================================================
// 0xde68: WORD 'UNK_0xde6a' codep=0x2214 parp=0xde6a
// ================================================
// 0xde6a: db 0x82 0x00 0x14 0x22 0x04 0x00 0x14 0x22 0x00 0x00 '   "   "  '

// ================================================
// 0xde74: WORD 'UNK_0xde76' codep=0x2214 parp=0xde76
// ================================================
// 0xde76: db 0x00 0x40 ' @'

// ================================================
// 0xde78: WORD 'UNK_0xde7a' codep=0x2214 parp=0xde7a
// ================================================
// 0xde7a: db 0x00 0x04 '  '

// ================================================
// 0xde7c: WORD 'UNK_0xde7e' codep=0x2214 parp=0xde7e
// ================================================
// 0xde7e: db 0x48 0x3a 'H:'

// ================================================
// 0xde80: WORD 'RESUME' codep=0x1d29 parp=0xde82
// ================================================
// 0xde82: db 0x01 0x00 '  '

// ================================================
// 0xde84: WORD 'UNK_0xde86' codep=0x1d29 parp=0xde86
// ================================================
// 0xde86: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x0c 0x50 0x0e 0x6e 0x0e 0x32 0x30 0x37 0x34 0x92 0x0c 0xf0 0x0d 0x3d 0x0f 0x5c 0x15 0xe8 0xff 0x90 0x0e 0x32 0x0e 0xb4 0x0d 0xb4 0x0d 0x3d 0x90 0x3d 0x90 0x90 0x0e 0x90 0x0e 0x3d 0x90 0x83 0x3b 0xef 0x2a 0x90 0x16 0x4c 0x22 0x8b 0x3b 0x20 0x35 0x32 0x30 0x37 0x35 0x50 0x0e 0x72 0x0f 0x92 0x0c 0x7f 0x0e 0x50 0x0e 0x72 0x0f 0xc3 0x4b 0x72 0x0f 0x41 0x0e 0x50 0x0e 0x3d 0x0f 0x9f 0x11 0xfa 0x15 0x08 0x00 0x68 0xde 0x60 0x16 0x04 0x00 0x62 0xde 0x57 0x40 0x07 0x13 0xfa 0x15 0x3c 0x00 0x7f 0x0e 0x50 0x0e 0x72 0x0f 0x41 0x0e 0x92 0x0c 0xc6 0x11 0x41 0x0e 0xb3 0x0e 0x6a 0x6d 0x05 0x10 0x72 0x0f 0x20 0x0f 0x5d 0x17 0x64 0x00 0xd8 0x4a 0x5d 0x17 0x0a 0x00 0x46 0x12 0xfa 0x15 0x14 0x00 0x2e 0x0f 0x5d 0x17 0x10 0x00 0xd8 0x4a 0x41 0x0e 0x47 0x49 0x72 0x0f 0x6e 0xde 0x76 0x6d 0x73 0x3b 0xae 0x3f 0x50 0x0e 0x72 0x0f 0x6a 0x6d 0xd0 0x15 0x8c 0xff 0xde 0x0d 0x90 0x16 0x4c 0x22 0x8b 0x3b 0x20 0x0f 0xb8 0x15 0x00 0x00 0xc6 0x4b 0x45 0x59 0x49 0x4e 0xc3 0xa0 0x3c 0x34 0xe5 0x46 0xdf 0xc5 0x44 0x58 0x43 0x52 0xd3 0xa0 0x3c 0x38 0xe5 0x53 0xdf 0xc5 0x44 0x59 0x43 0x52 0x29 0x1d 0x3a 0x20 ':  ALLOT  P n 2074    = \     2     = =     =  ; *  L" ; 52075P r    P r  Kr A P =       h `   b W@    <  P r A     A   jm  r   ] d  J]   F     . ]    JA GIr n vms; ?P r jm        L" ;       KEYIN  <4 F  DXCR  <8 S  DYCR) : '

// ================================================
// 0xdf68: WORD 'UNK_0xdf6a' codep=0x1d29 parp=0xdf6a
// ================================================
// 0xdf6a: db 0x3a 0x20 ': '

// ================================================
// 0xdf6c: WORD 'UNK_0xdf6e' codep=0x1d29 parp=0xdf6e
// ================================================
// 0xdf6e: db 0x14 0x00 '  '

// ================================================
// 0xdf70: WORD 'UNK_0xdf72' codep=0x1d29 parp=0xdf72
// ================================================
// 0xdf72: db 0x8c 0x00 '  '

// ================================================
// 0xdf74: WORD 'UNK_0xdf76' codep=0x1d29 parp=0xdf76
// ================================================
// 0xdf76: db 0x96 0x00 '  '

// ================================================
// 0xdf78: WORD 'UNK_0xdf7a' codep=0x1d29 parp=0xdf7a
// ================================================
// 0xdf7a: db 0x28 0x00 '( '

// ================================================
// 0xdf7c: WORD 'UNK_0xdf7e' codep=0x1d29 parp=0xdf7e
// ================================================
// 0xdf7e: db 0x09 0x00 '  '

// ================================================
// 0xdf80: WORD 'UNK_0xdf82' codep=0x1d29 parp=0xdf82
// ================================================
// 0xdf82: db 0x06 0x00 '  '

// ================================================
// 0xdf84: WORD 'UNK_0xdf86' codep=0x1d29 parp=0xdf86
// ================================================
// 0xdf86: db 0x03 0x00 '  '

// ================================================
// 0xdf88: WORD 'UNK_0xdf8a' codep=0x1d29 parp=0xdf8a
// ================================================
// 0xdf8a: db 0x14 0x00 '  '

// ================================================
// 0xdf8c: WORD 'UNK_0xdf8e' codep=0x1d29 parp=0xdf8e
// ================================================
// 0xdf8e: db 0x09 0x00 '  '

// ================================================
// 0xdf90: WORD 'UNK_0xdf92' codep=0x1d29 parp=0xdf92
// ================================================
// 0xdf92: db 0x84 0xe8 0x29 0x1d 0x3a 0x20 '  ) : '

// ================================================
// 0xdf98: WORD 'UNK_0xdf9a' codep=0x1d29 parp=0xdf9a
// ================================================
// 0xdf9a: db 0x02 0x00 '  '

// ================================================
// 0xdf9c: WORD 'UNK_0xdf9e' codep=0x1d29 parp=0xdf9e
// ================================================
// 0xdf9e: db 0x99 0xe8 '  '

// ================================================
// 0xdfa0: WORD 'UNK_0xdfa2' codep=0x1d29 parp=0xdfa2
// ================================================
// 0xdfa2: db 0x0b 0x00 '  '

// ================================================
// 0xdfa4: WORD 'UNK_0xdfa6' codep=0x1d29 parp=0xdfa6
// ================================================
// 0xdfa6: db 0x3a 0x20 ': '

// ================================================
// 0xdfa8: WORD 'UNK_0xdfaa' codep=0x2214 parp=0xdfaa
// ================================================
// 0xdfaa: db 0x0b 0x00 '  '

// ================================================
// 0xdfac: WORD 'UNK_0xdfae' codep=0x2214 parp=0xdfae
// ================================================
// 0xdfae: db 0x12 0x00 '  '

// ================================================
// 0xdfb0: WORD 'HOST' codep=0x5275 parp=0xdfb9
// ================================================
// 0xdfb9: db 0xa8 0x2c 0x67 0x45 0xef 0x09 0x31 0x5d 0xe6 0x55 0xd8 0x55 0x56 0x56 0x4a 0x58 0x45 0x52 0xec 0x84 0xa3 0x5d ' ,gE  1] U UVVJXER   ]'

// ================================================
// 0xdfcf: WORD 'VECTORERRORS' codep=0x5275 parp=0xdfda
// ================================================
// 0xdfda: db 0xf2 0x55 0xff 0x55 0x9d 0x58 0x92 0x58 0x87 0x58 0x7c 0x58 0x6e 0x58 0x63 0x58 0x3a 0x56 0x58 0x46 0xe6 0x07 0xfa 0x07 0x62 0x6c 0x88 0x01 0x8a 0x01 0x01 0x62 0x03 0x62 0xaa 0x58 ' U U X X X|XnXcX:VXF    bl     b b X'

// ================================================
// 0xdffe: WORD 'UNK_0xe000' codep=0x1d29 parp=0xe000
// ================================================
// 0xe000: db 0x00 0x02 0x01 0x0b 0x04 0x08 0x05 0x09 0x06 0x0a 0x07 0x03 0x0c 0x0e 0x0d 0x0f '                '

// ================================================
// 0xe010: WORD 'UNK_0xe012' codep=0x224c parp=0xe012
// ================================================

void UNK_0xe012() // UNK_0xe012
{
  Push(0xf000);
  Push(0xc000);
  LC_at_(); // LC@
  Push(0x0021);
  _eq_(); // =
}


// ================================================
// 0xe024: WORD 'UNK_0xe026' codep=0x224c parp=0xe026
// ================================================

void UNK_0xe026() // UNK_0xe026
{
  Push(0x0010);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x0010);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x03da);
  P_ex_(); // P!
  Push(i); // I
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(0x03de);
  P_ex_(); // P!
  i++;
  } while(i<imax); // (LOOP) 0xffe2

  Pop(); // DROP
  Push(cc__3); // 3
  Push(0x03da);
  P_ex_(); // P!
}


// ================================================
// 0xe05a: WORD 'SET.COLORS' codep=0x224c parp=0xe05c
// ================================================

void SET_dot_COLORS() // SET.COLORS
{
  UNK_0xe012(); // UNK_0xe012
  if (Pop() == 0) return;
  Push(pp_UNK_0xe000); // UNK_0xe000
  UNK_0xe026(); // UNK_0xe026
}

// 0xe068: db 0x29 0x1d 0x3a 0x20 ') : '

// ================================================
// 0xe06c: WORD 'UNK_0xe06e' codep=0x1d29 parp=0xe06e
// ================================================
// 0xe06e: db 0x20 0x00 0x4c 0x22 0x68 0xe0 0x76 0x6d 0x6c 0xe0 0xc5 0x6d 0x90 0x16 0x4c 0x22 0x68 0xe0 0xae 0x0b 0x6c 0xe0 0xae 0x0b 0x72 0x0f 0xf2 0x0e 0x41 0x0e 0x6c 0xe0 0x83 0x6d 0xea 0x6d 0x90 0x16 '  L"h vml  m  L"h   l   r   A l  m m  '

// ================================================
// 0xe094: WORD 'UNK_0xe096' codep=0x224c parp=0xe096
// ================================================

void UNK_0xe096() // UNK_0xe096
{
  Push(cc_MUSSEG); // MUSSEG
  SWAP(); // SWAP
}


// ================================================
// 0xe09c: WORD 'UNK_0xe09e' codep=0x224c parp=0xe09e
// ================================================

void UNK_0xe09e() // UNK_0xe09e
{
  UNK_0xe096(); // UNK_0xe096
  L_ex_(); // L!
}


// ================================================
// 0xe0a4: WORD 'UNK_0xe0a6' codep=0x224c parp=0xe0a6
// ================================================

void UNK_0xe0a6() // UNK_0xe0a6
{
  UNK_0xe096(); // UNK_0xe096
  L_at_(); // L@
}


// ================================================
// 0xe0ac: WORD 'UNK_0xe0ae' codep=0x224c parp=0xe0ae
// ================================================

void UNK_0xe0ae() // UNK_0xe0ae
{
  UNK_0xe096(); // UNK_0xe096
  LC_ex_(); // LC!
}


// ================================================
// 0xe0b4: WORD 'UNK_0xe0b6' codep=0x224c parp=0xe0b6
// ================================================

void UNK_0xe0b6() // UNK_0xe0b6
{
  Push(0x001c);
  _ro__ex_OLD_rc_(); // (!OLD)
  Push(Read16(sp)); // DUP
  Push(0x000e);
  UNK_0xe0a6(); // UNK_0xe0a6
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(0); // 0
  Push(2); // 2
  UNK_0xe0ae(); // UNK_0xe0ae
  Push(0); // 0
  UNK_0xe0a6(); // UNK_0xe0a6
  _gt_R(); // >R
  Push(h); // I
  UNK_0xe09e(); // UNK_0xe09e
  R_gt_(); // R>
  Push(Pop()+2); // 2+
  UNK_0xe09e(); // UNK_0xe09e
  Push(cc_MUSSEG); // MUSSEG
  Push(0x000e);
  UNK_0xe0a6(); // UNK_0xe0a6
  Push(0x001c);
  _ro__ex_SET_rc_(); // (!SET)
  return;

  label1:
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe0f8: WORD 'UNK_0xe0fa' codep=0x224c parp=0xe0fa
// ================================================

void UNK_0xe0fa() // UNK_0xe0fa
{
  _at_DS(); // @DS
  Push(0x1000);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xe104: WORD 'UNK_0xe106' codep=0x1d29 parp=0xe106
// ================================================
// 0xe106: db 0xfe 0x11 '  '

// ================================================
// 0xe108: WORD 'UNK_0xe10a' codep=0x1d29 parp=0xe10a
// ================================================
// 0xe10a: db 0x00 0x00 '  '

// ================================================
// 0xe10c: WORD '?HUB' codep=0x224c parp=0xe115
// ================================================

void _ask_HUB() // ?HUB
{
  Push(pp_UNK_0xe10a); // UNK_0xe10a
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  _eq_(); // =
  if (Pop() == 0) goto label1;
  ON(); // ON
  return;

  label1:
  OFF(); // OFF
}


// ================================================
// 0xe12d: WORD 'SETHID' codep=0x224c parp=0xe138
// ================================================

void SETHID() // SETHID
{
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe106); // UNK_0xe106
  _ex_(); // !
}


// ================================================
// 0xe142: WORD 'SETDIS' codep=0x224c parp=0xe14d
// ================================================

void SETDIS() // SETDIS
{
  UNK_0xe0fa(); // UNK_0xe0fa
  Push(pp_UNK_0xe106); // UNK_0xe106
  _ex_(); // !
}


// ================================================
// 0xe155: WORD 'SCR>CG' codep=0x224c parp=0xe160
// ================================================

void SCR_gt_CG() // SCR>CG
{
  Push(cc__dash_1); // -1
  Push(0x00c8);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x0050);
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(Pop()+1); // 1+
  Push(Read16(sp)); // DUP
  Push(j); // I
  Push(Pop()*2); // 2*
  Push(i); // J
  L_at_PIXEL(); // L@PIXEL
  E_gt_CGA(); // E>CGA
  Push(0x000f);
  Push(Pop() & Pop()); // AND
  Push(Pop()<<4); // 16*
  Push(j); // I
  Push(Pop()*2); // 2*
  Push(Pop()+1); // 1+
  Push(i); // J
  L_at_PIXEL(); // L@PIXEL
  E_gt_CGA(); // E>CGA
  Push(0x000f);
  Push(Pop() & Pop()); // AND
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xe106); // UNK_0xe106
  Push(Read16(Pop())); // @
  ROT(); // ROT
  LC_ex_(); // LC!
  j++;
  } while(j<jmax); // (LOOP) 0xffcc

  i++;
  } while(i<imax); // (LOOP) 0xffc0

  Pop(); // DROP
}


// ================================================
// 0xe1b0: WORD 'UNK_0xe1b2' codep=0x224c parp=0xe1b2
// ================================================

void UNK_0xe1b2() // UNK_0xe1b2
{
  Push(pp_UNK_0xe06e); // UNK_0xe06e
  _ex_(); // !
  Push(pp_UNK_0xdf92); // UNK_0xdf92
  _ex_(); // !
}


// ================================================
// 0xe1bc: WORD 'UNK_0xe1be' codep=0x224c parp=0xe1be
// ================================================

void UNK_0xe1be() // UNK_0xe1be
{
  Push(pp_UNK_0xdf72); // UNK_0xdf72
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdf6e); // UNK_0xdf6e
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(pp_UNK_0xdf82); // UNK_0xdf82
  Push(Read16(Pop())); // @
  _slash_(); // /
  Push(pp_UNK_0xdf8a); // UNK_0xdf8a
  _ex_(); // !
}


// ================================================
// 0xe1d4: WORD 'UNK_0xe1d6' codep=0x224c parp=0xe1d6
// ================================================

void UNK_0xe1d6() // UNK_0xe1d6
{
  Push(pp_UNK_0xdf76); // UNK_0xdf76
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdf7a); // UNK_0xdf7a
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(pp_UNK_0xdf7e); // UNK_0xdf7e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdf86); // UNK_0xdf86
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  _slash_(); // /
  Push(pp_UNK_0xdf8e); // UNK_0xdf8e
  _ex_(); // !
}


// ================================================
// 0xe1f2: WORD 'UNK_0xe1f4' codep=0x224c parp=0xe1f4
// ================================================

void UNK_0xe1f4() // UNK_0xe1f4
{

  label1:
  Push(Read16(sp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  Push(cc_BL); // BL
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(Pop()-1); // 1-
  goto label1;
}


// ================================================
// 0xe20a: WORD 'UNK_0xe20c' codep=0x224c parp=0xe20c
// ================================================

void UNK_0xe20c() // UNK_0xe20c
{
  Push(pp_UNK_0xdf92); // UNK_0xdf92
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdf9e); // UNK_0xdf9e
  _ex_(); // !
  Push(1); // 1
  Push(pp_UNK_0xdf9a); // UNK_0xdf9a
  _ex_(); // !

  label2:
  Push(pp_UNK_0xdf9e); // UNK_0xdf9e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdf8a); // UNK_0xdf8a
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Read16(sp)); // DUP
  Push(pp_UNK_0xdf92); // UNK_0xdf92
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe06e); // UNK_0xe06e
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  U_st_(); // U<
  if (Pop() == 0) goto label1;
  UNK_0xe1f4(); // UNK_0xe1f4
  Push(Pop()+1); // 1+
  Push(pp_UNK_0xdf9e); // UNK_0xdf9e
  _ex_(); // !
  Push(1); // 1
  Push(pp_UNK_0xdf9a); // UNK_0xdf9a
  _plus__ex_(); // +!
  goto label2;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xe24c: WORD 'UNK_0xe24e' codep=0x224c parp=0xe24e
// ================================================

void UNK_0xe24e() // UNK_0xe24e
{
  UNK_0xe20c(); // UNK_0xe20c
  Push(pp_UNK_0xdf8e); // UNK_0xdf8e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdf9a); // UNK_0xdf9a
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(Pop()>>1); // 2/
  Push(pp_UNK_0xdf7e); // UNK_0xdf7e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdf86); // UNK_0xdf86
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Pop() * Pop()); // *
  Push(-Pop()); // NEGATE
  Push(pp_UNK_0xdf76); // UNK_0xdf76
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(pp_YBLT); // YBLT
  _ex_(); // !
}


// ================================================
// 0xe276: WORD 'UNK_0xe278' codep=0x224c parp=0xe278
// ================================================

void UNK_0xe278() // UNK_0xe278
{
  Push(pp_YBLT); // YBLT
  Push(Read16(Pop())); // @
  Push(0x0384);
  Push(pp_YBLT); // YBLT
  _ex_(); // !
  Push(0); // 0
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  Push(pp_UNK_0xdf9e); // UNK_0xdf9e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdfa2); // UNK_0xdfa2
  Push(Read16(Pop())); // @
  Func14(TYPE); // call of word 0x2690 '(TYPE)'
  Push(pp_YBLT); // YBLT
  _ex_(); // !
  Push(pp_UNK_0xdf72); // UNK_0xdf72
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdf6e); // UNK_0xdf6e
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Pop()>>1); // 2/
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(Pop()>>1); // 2/
  Push(-Pop()); // NEGATE
  Push(Pop() + Pop()); // +
  Push(pp_XBLT); // XBLT
  _ex_(); // !
}


// ================================================
// 0xe2b4: WORD 'UNK_0xe2b6' codep=0x224c parp=0xe2b6
// ================================================

void UNK_0xe2b6() // UNK_0xe2b6
{
  UNK_0xe278(); // UNK_0xe278
  Push(pp_UNK_0xdf9e); // UNK_0xdf9e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdfa2); // UNK_0xdfa2
  Push(Read16(Pop())); // @
  Func14(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe2c4: WORD 'UNK_0xe2c6' codep=0x224c parp=0xe2c6
// ================================================

void UNK_0xe2c6() // UNK_0xe2c6
{
  UNK_0xe24e(); // UNK_0xe24e
  Push(pp_UNK_0xdf92); // UNK_0xdf92
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdf9e); // UNK_0xdf9e
  _ex_(); // !

  label2:
  Push(pp_UNK_0xdf9e); // UNK_0xdf9e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdf8a); // UNK_0xdf8a
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Read16(sp)); // DUP
  Push(pp_UNK_0xdf92); // UNK_0xdf92
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe06e); // UNK_0xe06e
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  U_st_(); // U<
  if (Pop() == 0) goto label1;
  UNK_0xe1f4(); // UNK_0xe1f4
  Push(pp_UNK_0xdf9e); // UNK_0xdf9e
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(pp_UNK_0xdfa2); // UNK_0xdfa2
  _ex_(); // !
  UNK_0xe2b6(); // UNK_0xe2b6
  Push(pp_UNK_0xdf7e); // UNK_0xdf7e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xdf86); // UNK_0xdf86
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(-Pop()); // NEGATE
  Push(pp_YBLT); // YBLT
  _plus__ex_(); // +!
  Push(pp_UNK_0xdfa2); // UNK_0xdfa2
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(pp_UNK_0xdf9e); // UNK_0xdf9e
  _plus__ex_(); // +!
  goto label2;

  label1:
  Pop(); // DROP
  Push(pp_UNK_0xdf92); // UNK_0xdf92
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe06e); // UNK_0xe06e
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xdf9e); // UNK_0xdf9e
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(pp_UNK_0xdfa2); // UNK_0xdfa2
  _ex_(); // !
  UNK_0xe2b6(); // UNK_0xe2b6
}


// ================================================
// 0xe332: WORD 'UNK_0xe334' codep=0x224c parp=0xe334
// ================================================

void UNK_0xe334() // UNK_0xe334
{
  UNK_0xe1b2(); // UNK_0xe1b2
  UNK_0xe1be(); // UNK_0xe1be
  UNK_0xe1d6(); // UNK_0xe1d6
  UNK_0xe2c6(); // UNK_0xe2c6
}


// ================================================
// 0xe33e: WORD 'UNK_0xe340' codep=0x224c parp=0xe340
// ================================================

void UNK_0xe340() // UNK_0xe340
{
  Push(0x0014);
  Push(pp_UNK_0xdf6e); // UNK_0xdf6e
  _ex_(); // !
  Push(0x008c);
  Push(pp_UNK_0xdf72); // UNK_0xdf72
  _ex_(); // !
  Push(0x0028);
  Push(pp_UNK_0xdf7a); // UNK_0xdf7a
  _ex_(); // !
  Push(0x0096);
  Push(pp_UNK_0xdf76); // UNK_0xdf76
  _ex_(); // !
  Push(cc__3); // 3
  Push(pp_UNK_0xdf86); // UNK_0xdf86
  _ex_(); // !
  Push(cc__9); // 9
  Push(pp_UNK_0xdf7e); // UNK_0xdf7e
  _ex_(); // !
  Push(cc__6); // 6
  Push(pp_UNK_0xdf82); // UNK_0xdf82
  _ex_(); // !
}


// ================================================
// 0xe374: WORD 'UNK_0xe376' codep=0x224c parp=0xe376
// ================================================

void UNK_0xe376() // UNK_0xe376
{
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push(0x0096);
  Push(0x0014);
  Push(0x0028);
  Push(0x0096);
  SetColor("BLACK");
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe392: WORD 'UNK_0xe394' codep=0x224c parp=0xe394
// ================================================

void UNK_0xe394() // UNK_0xe394
{
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push(0x0011);
  Push(0x0014);
  Push(cc__5); // 5
  Push(0x009f);
  SetColor("BLACK");
  POLY_dash_WINDOW_dash_FILL(); // POLY-WINDOW-FILL
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe3ae: WORD 'UNK_0xe3b0' codep=0x224c parp=0xe3b0
// ================================================

void UNK_0xe3b0() // UNK_0xe3b0
{
  UNK_0xe340(); // UNK_0xe340
  UNK_0xe376(); // UNK_0xe376
  _gt_2FONT(); // >2FONT
  UNK_0xe334(); // UNK_0xe334
}


// ================================================
// 0xe3ba: WORD 'UNK_0xe3bc' codep=0x224c parp=0xe3bc
// ================================================

void UNK_0xe3bc() // UNK_0xe3bc
{
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(cc__5); // 5
  Push(0x009b);
  Push(0x000a);
  Push(0x00a0);
  LLINE(); // LLINE
  Push(0x000a);
  Push(0x00a0);
  Push(0x0096);
  Push(0x00a0);
  LLINE(); // LLINE
  Push(0x0096);
  Push(0x00a0);
  Push(0x009b);
  Push(0x009b);
  LLINE(); // LLINE
  Push(0x009b);
  Push(0x009b);
  Push(0x009b);
  Push(0x0019);
  LLINE(); // LLINE
  Push(0x009b);
  Push(0x0019);
  Push(0x0096);
  Push(0x0014);
  LLINE(); // LLINE
  Push(0x0096);
  Push(0x0014);
  Push(0x0014);
  Push(0x0014);
  LLINE(); // LLINE
  Push(0x0014);
  Push(0x0014);
  Push(0x0011);
  Push(0x0017);
  LLINE(); // LLINE
  Push(0x0011);
  Push(0x0017);
  Push(0x0011);
  Push(0x001e);
  LLINE(); // LLINE
  Push(0x0011);
  Push(0x001e);
  Push(0x000e);
  Push(0x0021);
  LLINE(); // LLINE
  Push(0x000e);
  Push(0x0021);
  Push(cc__8); // 8
  Push(0x0021);
  LLINE(); // LLINE
  Push(cc__8); // 8
  Push(0x0021);
  Push(cc__5); // 5
  Push(0x0024);
  LLINE(); // LLINE
  Push(cc__5); // 5
  Push(0x0024);
  Push(cc__5); // 5
  Push(0x009b);
  LLINE(); // LLINE
  Push(cc__5); // 5
  Push(0x001d);
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  _dot_1LOGO(); // .1LOGO
}

// 0xe49a: db 0x4c 0x22 0x25 0x95 0x5d 0x17 0x14 0x00 0x5d 0x17 0x11 0x00 0x2b 0xa0 0x92 0xe3 0xdc 0x1b 0x19 0x50 0x52 0x45 0x53 0x53 0x20 0x41 0x4e 0x59 0x20 0x4b 0x45 0x59 0x20 0x54 0x4f 0x20 0x43 0x4f 0x4e 0x54 0x49 0x4e 0x55 0x45 0xa2 0x94 0xa9 0x48 0x32 0x0e 0x90 0x16 'L"% ]   ]   +      PRESS ANY KEY TO CONTINUE   H2   '

// ================================================
// 0xe4ce: WORD '.GAMEOPS' codep=0x224c parp=0xe4d0
// ================================================

void _dot_GAMEOPS() // .GAMEOPS
{
  _gt_DISPLAY(); // >DISPLAY
  DARK(); // DARK
  UNK_0xe3bc(); // UNK_0xe3bc
  BEEPOFF(); // BEEPOFF
  _gt_3FONT(); // >3FONT
  Push(0x002e);
  Push(0x00ab);
  POS_dot_(); // POS.
  PRINT("GAME", 4); // (.")
  Push(0x000a);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  PRINT("OPTIONS", 7); // (.")
  _gt_2FONT(); // >2FONT
  Push(0x0027);
  Push(0x0011);
  POS_dot_(); // POS.
  PRINT("SELECT AN OPTION", 16); // (.")
  Push(0x0022);
  Push(0x0078);
  POS_dot_(); // POS.
  PRINT("1. SAVE GAME", 12); // (.")
  Push(0x0022);
  Push(0x0064);
  POS_dot_(); // POS.
  PRINT("2. RESUME GAME", 14); // (.")
  Push(0x0022);
  Push(0x0050);
  POS_dot_(); // POS.
  PRINT("3. CHANGE DISPLAY MODE", 22); // (.")
  Push(0x0022);
  Push(0x0037);
  POS_dot_(); // POS.
  PRINT("9. END GAME UNSAVED", 19); // (.")
  _gt_0FONT(); // >0FONT
}


// ================================================
// 0xe597: WORD 'UNK_0xe599' codep=0x224c parp=0xe599
// ================================================

void UNK_0xe599() // UNK_0xe599
{
  _gt_3FONT(); // >3FONT
  Push(0x0035);
  Push(0x00ab);
  POS_dot_(); // POS.
  PRINT("SAVE", 4); // (.")
  Push(0x000a);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  PRINT("GAME", 4); // (.")
  _gt_0FONT(); // >0FONT
}


// ================================================
// 0xe5bf: WORD 'UNK_0xe5c1' codep=0x224c parp=0xe5c1
// ================================================

void UNK_0xe5c1() // UNK_0xe5c1
{
  _gt_3FONT(); // >3FONT
  Push(0x0035);
  Push(0x00ab);
  POS_dot_(); // POS.
  PRINT("LOAD", 4); // (.")
  Push(0x000a);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  PRINT("GAME", 4); // (.")
  _gt_0FONT(); // >0FONT
}


// ================================================
// 0xe5e7: WORD 'UNK_0xe5e9' codep=0x224c parp=0xe5e9
// ================================================

void UNK_0xe5e9() // UNK_0xe5e9
{
  _gt_2FONT(); // >2FONT
  Push(0x001e);
  Push(0x0011);
  POS_dot_(); // POS.
  UNK_0xe394(); // UNK_0xe394
  PRINT("PRESS ANY KEY TO EXIT", 21); // (.")
  _gt_0FONT(); // >0FONT
  KEY(); // KEY
  Pop(); // DROP
  Func14(PAGE); // call of word 0x274c '(PAGE)'
  BYE(); // BYE
}


// ================================================
// 0xe61b: WORD 'UNK_0xe61d' codep=0x224c parp=0xe61d
// ================================================

void UNK_0xe61d() // UNK_0xe61d
{
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+

  label1:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_gt_(); // D>
  _i_KEY(); // 'KEY
  Push(Read16(sp)); // DUP
  Push(pp_UNK_0xdfa6); // UNK_0xdfa6
  _ex_(); // !
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe63d: WORD 'UNK_0xe63f' codep=0x224c parp=0xe63f
// ================================================

void UNK_0xe63f() // UNK_0xe63f
{
  Push(pp_TIMESTAMP); // TIMESTAMP
  _ex_(); // !
}


// ================================================
// 0xe645: WORD 'UNK_0xe647' codep=0x224c parp=0xe647
// ================================================

void UNK_0xe647() // UNK_0xe647
{
  Push(pp_TIMESTAMP); // TIMESTAMP
  Push(Read16(Pop())); // @
}


// ================================================
// 0xe64d: WORD 'UNK_0xe64f' codep=0x224c parp=0xe64f
// ================================================

void UNK_0xe64f() // UNK_0xe64f
{
  Push(Read16(sp)); // DUP
  Func3(":TIMESTAMP");
  _ex_(); // !
}


// ================================================
// 0xe657: WORD 'UNK_0xe659' codep=0x224c parp=0xe659
// ================================================

void UNK_0xe659() // UNK_0xe659
{
  TIME(); // TIME
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(2); // 2

  label1:
  UNK_0xe63f(); // UNK_0xe63f
}


// ================================================
// 0xe66d: WORD 'UNK_0xe66f' codep=0x224c parp=0xe66f
// ================================================

void UNK_0xe66f() // UNK_0xe66f
{
  UNK_0xe647(); // UNK_0xe647
  UNK_0xe659(); // UNK_0xe659
  UNK_0xe647(); // UNK_0xe647
  SWAP(); // SWAP
  UNK_0xe63f(); // UNK_0xe63f
  MOUNTA(); // MOUNTA
  UNK_0xe64f(); // UNK_0xe64f
  MOUNTB(); // MOUNTB
  UNK_0xe64f(); // UNK_0xe64f
  UNK_0xe63f(); // UNK_0xe63f
}

// 0xe685: db 0x4c 0x22 0xf6 0x3b 0xae 0x0b 0x5d 0x17 0xf4 0x01 0x92 0x0f 0x90 0x16 0x4c 0x22 0x85 0xe6 0x5d 0x17 0x32 0x00 0x72 0x0f 0x70 0xe0 0xbf 0x8f 0xba 0xe3 0x39 0x3f 0x1b 0x50 0x4c 0x41 0x43 0x45 0x20 0x44 0x49 0x53 0x4b 0x20 0x43 0x4f 0x4e 0x54 0x41 0x49 0x4e 0x49 0x4e 0x47 0x20 0x46 0x49 0x4c 0x45 0x20 0x7c 0xe0 0x22 0x41 0x9b 0x3b 0x8e 0x27 0x7c 0xe0 0x5d 0x17 0x2e 0x00 0x85 0xe6 0x6a 0x6d 0x32 0x41 0x85 0xe6 0xe7 0x0f 0x73 0x3b 0xea 0x6d 0x85 0xe6 0x7b 0x3b 0x7c 0xe0 0x39 0x3f 0x06 0x20 0x49 0x4e 0x54 0x4f 0x20 0x7c 0xe0 0x14 0x41 0x92 0x0c 0xc8 0x0d 0xfa 0x15 0x27 0x00 0x39 0x3f 0x06 0x44 0x52 0x49 0x56 0x45 0x20 0x85 0xe6 0xf2 0x0e 0xea 0x6d 0x5d 0x17 0x40 0x00 0x72 0x0f 0x85 0xe6 0x93 0x3b 0x72 0x0f 0x6a 0x6d 0x85 0xe6 0x93 0x3b 0x60 0x16 0x0e 0x00 0x39 0x3f 0x09 0x41 0x4e 0x59 0x20 0x44 0x52 0x49 0x56 0x45 0x7c 0xe0 0x68 0xe0 0xae 0x0b 0x6c 0xe0 0xae 0x0b 0xae 0xe3 0x9a 0xe4 0x90 0x16 0x4c 0x22 0x85 0xe6 0x5d 0x17 0x32 0x00 0x72 0x0f 0x70 0xe0 0xbf 0x8f 0xba 0xe3 0x39 0x3f 0x22 0x50 0x4c 0x41 0x43 0x45 0x20 0x44 0x49 0x53 0x4b 0x20 0x43 0x4f 0x4e 0x54 0x41 0x49 0x4e 0x49 0x4e 0x47 0x20 0x54 0x48 0x45 0x20 0x43 0x4f 0x52 0x52 0x45 0x43 0x54 0x20 0x7c 0xe0 0x7c 0xe0 0x39 0x3f 0x05 0x20 0x46 0x49 0x4c 0x45 0x7c 0xe0 0x68 0xe0 0xae 0x0b 0x6c 0xe0 0xae 0x0b 0xae 0xe3 0x9a 0xe4 0x90 0x16 'L" ;  ]       L"  ] 2 r p     9? PLACE DISK CONTAINING FILE | "A ; '| ] .   jm2A    s; m  {;| 9?  INTO |  A      ' 9? DRIVE      m] @ r    ;r jm   ;`   9? ANY DRIVE| h   l         L"  ] 2 r p     9?"PLACE DISK CONTAINING THE CORRECT | | 9?  FILE| h   l         '

// ================================================
// 0xe78a: WORD 'UNK_0xe78c' codep=0x224c parp=0xe78c
// ================================================

void UNK_0xe78c() // UNK_0xe78c
{
  UNK_0xe394(); // UNK_0xe394
  BEEP(); // BEEP

  UNK_0x3f3b("SAVED GAME INTEGRITY ERROR.");
  UNK_0xe3b0(); // UNK_0xe3b0
  UNK_0xe5e9(); // UNK_0xe5e9
}


// ================================================
// 0xe7b4: WORD 'UNK_0xe7b6' codep=0x224c parp=0xe7b6
// ================================================

void UNK_0xe7b6() // UNK_0xe7b6
{
  Func3(":SAVE");
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xe394(); // UNK_0xe394
  BEEP(); // BEEP

  UNK_0x3f3b("GAME IN PROGRESS BUT NOT SAVED.");
  UNK_0xe3b0(); // UNK_0xe3b0
  UNK_0xe5e9(); // UNK_0xe5e9
}


// ================================================
// 0xe7ec: WORD 'UNK_0xe7ee' codep=0x224c parp=0xe7ee
// ================================================

void UNK_0xe7ee() // UNK_0xe7ee
{
  Push(0x00ff);
  Push(pp_DERROR); // DERROR
  _ex_(); // !
  _at_DS(); // @DS
  PAD(); // PAD
  Push(0x0032);
  Push(Pop() + Pop()); // +
  Push(pp_DTA); // DTA
  _2_ex_(); // 2!
  DOS_dash_DTA(); // DOS-DTA
  Push(0); // 0
  RELREC(); // RELREC
  _ex_(); // !
  Push(1); // 1
  RECSIZE(); // RECSIZE
  _ex_(); // !
  READ_dash_RANDOM(); // READ-RANDOM
  WRITE_dash_RANDOM(); // WRITE-RANDOM
  Pop(); Pop();// 2DROP
  INIT(); // INIT
  Push(pp_DERROR); // DERROR
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xe822: WORD 'UNK_0xe824' codep=0x224c parp=0xe824
// ================================================

void UNK_0xe824() // UNK_0xe824
{
  CTINIT(); // CTINIT

  UNK_0x3f3b("MUST PLAY ON A WRITABLE COPY.");
  _dot_TTY(); // .TTY

  UNK_0x3f3b("PRESS ANY KEY TO EXIT.");
  _dot_TTY(); // .TTY
  KEY(); // KEY
  Pop(); // DROP
  BYE(); // BYE
}


// ================================================
// 0xe86b: WORD 'GDE' codep=0x224c parp=0xe86d
// ================================================

void GDE() // GDE
{
  Push(0xae85);
  Push(pp_ASKMOUNT); // ASKMOUNT
  _ex_(); // !
  Push(0xae67);
  Push(pp__i_VERSIONERR); // 'VERSIONERR
  _ex_(); // !
}


// ================================================
// 0xe87f: WORD '.RESUMING' codep=0x224c parp=0xe881
// ================================================

void _dot_RESUMING() // .RESUMING
{

  UNK_0x3f3b("RESUMING THE GAME IN PROGRESS...");
  UNK_0xe3b0(); // UNK_0xe3b0
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xe8ae: WORD 'UNK_0xe8b0' codep=0x224c parp=0xe8b0
// ================================================

void UNK_0xe8b0() // UNK_0xe8b0
{
  if (Pop() == 0) return;
  _2SWAP(); // 2SWAP
}


// ================================================
// 0xe8b8: WORD 'SCR>EG' codep=0x224c parp=0xe8c3
// ================================================

void SCR_gt_EG() // SCR>EG
{
  _gt_HIDDEN(); // >HIDDEN
  DARK(); // DARK
  Push(pp_XORMODE); // XORMODE
  Push(Read16(Pop())); // @
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(cc__dash_1); // -1
  Push(0x00c8);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x0050);
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(Pop()+1); // 1+
  Push(pp_UNK_0xe106); // UNK_0xe106
  Push(Read16(Pop())); // @
  OVER(); // OVER
  LC_at_(); // LC@
  Push(Read16(sp)); // DUP
  Push(Pop()>>4); // 16/
  Push(0x000f);
  Push(Pop() & Pop()); // AND
  C_gt_EGA(); // C>EGA
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(pp_COLOR); // COLOR
  _st__ex__gt_(); // <!>
  SETCOLO(); // SETCOLO
  Push(j); // I
  Push(Pop()*2); // 2*
  Push(i); // J
  PLOT(); // PLOT

  label1:
  Push(0x000f);
  Push(Pop() & Pop()); // AND
  C_gt_EGA(); // C>EGA
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label2;
  Push(pp_COLOR); // COLOR
  _st__ex__gt_(); // <!>
  SETCOLO(); // SETCOLO
  Push(j); // I
  Push(Pop()*2); // 2*
  Push(Pop()+1); // 1+
  Push(i); // J
  PLOT(); // PLOT

  label2:
  j++;
  } while(j<jmax); // (LOOP) 0xffb6

  i++;
  } while(i<imax); // (LOOP) 0xffaa

  Pop(); // DROP
  Push(pp_XORMODE); // XORMODE
  _ex_(); // !
}


// ================================================
// 0xe939: WORD 'RESTOREDISPLAY' codep=0x224c parp=0xe93b
// ================================================

void RESTOREDISPLAY() // RESTOREDISPLAY
{
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  SETDIS(); // SETDIS
  SCR_gt_EG(); // SCR>EG
  SCR_dash_RES(); // SCR-RES
  _gt_DISPLAY(); // >DISPLAY
  _ask_HUB(); // ?HUB
  Push(pp_UNK_0xe10a); // UNK_0xe10a
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  SETHID(); // SETHID
  SCR_gt_EG(); // SCR>EG

  label2:
  return;

  label1:
  UNK_0xe0fa(); // UNK_0xe0fa
  Push(1); // 1
  _v_DISPLAY(); // |DISPLAY
}


// ================================================
// 0xe965: WORD 'PRESERVEDISPLAY' codep=0x224c parp=0xe967
// ================================================

void PRESERVEDISPLAY() // PRESERVEDISPLAY
{
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  SETDIS(); // SETDIS
  SCR_gt_CG(); // SCR>CG
  _ask_HUB(); // ?HUB
  Push(pp_UNK_0xe10a); // UNK_0xe10a
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  _gt_HIDDEN(); // >HIDDEN
  SETHID(); // SETHID
  SCR_gt_CG(); // SCR>CG

  label2:
  return;

  label1:
  UNK_0xe0fa(); // UNK_0xe0fa
  Push(0); // 0
  _v_DISPLAY(); // |DISPLAY
}


// ================================================
// 0xe98f: WORD 'ESCDISABLE' codep=0x224c parp=0xe991
// ================================================

void ESCDISABLE() // ESCDISABLE
{
  Push(pp_ESC_dash_EN); // ESC-EN
  OFF(); // OFF
}


// ================================================
// 0xe997: WORD 'ESCENABLE' codep=0x224c parp=0xe999
// ================================================

void ESCENABLE() // ESCENABLE
{
  Push(pp_ESC_dash_EN); // ESC-EN
  ON(); // ON
}


// ================================================
// 0xe99f: WORD 'OFFCACHE' codep=0x224c parp=0xe9a1
// ================================================

void OFFCACHE() // OFFCACHE
{
  Push(pp__n_CACHE); // #CACHE
  OFF(); // OFF
  AUTO_dash_CACHE(); // AUTO-CACHE
}


// ================================================
// 0xe9a9: WORD 'ONCACHE' codep=0x224c parp=0xe9ab
// ================================================

void ONCACHE() // ONCACHE
{
  Push(pp__bo__n_CACHE_bc_); // [#CACHE]
  Push(Read16(Pop())); // @
  Push(pp__n_CACHE); // #CACHE
  _ex_(); // !
  AUTO_dash_CACHE(); // AUTO-CACHE
}


// ================================================
// 0xe9b7: WORD 'UNK_0xe9b9' codep=0x224c parp=0xe9b9
// ================================================

void UNK_0xe9b9() // UNK_0xe9b9
{
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(Read16(sp)); // DUP
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xdf6a); // UNK_0xdf6a
  _plus__ex_(); // +!
  Push(1); // 1
  i += Pop();
  } while(i<imax); // (/LOOP) 0xfff0

  Pop(); // DROP
}


// ================================================
// 0xe9d3: WORD 'NEWDOSMSGS' codep=0x224c parp=0xe9d5
// ================================================

void NEWDOSMSGS() // NEWDOSMSGS
{
  Push(0xe695);
  Push(pp_ASKMOUNT); // ASKMOUNT
  _ex_(); // !
  Push(0xe73b);
  Push(pp__i_VERSIONERR); // 'VERSIONERR
  _ex_(); // !
}


// ================================================
// 0xe9e7: WORD 'UNK_0xe9e9' codep=0x224c parp=0xe9e9
// ================================================

void UNK_0xe9e9() // UNK_0xe9e9
{
  UNK_0xe0fa(); // UNK_0xe0fa
  _gt_(); // >
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xe9f1: WORD 'UNK_0xe9f3' codep=0x224c parp=0xe9f3
// ================================================

void UNK_0xe9f3() // UNK_0xe9f3
{
  Push(Read16(sp)); // DUP
  UNK_0xe9e9(); // UNK_0xe9e9
  if (Pop() == 0) goto label1;
  _at_DS(); // @DS
  _dash_(); // -
  Push(1); // 1
  return;

  label1:
  Push(pp_LFSEG); // LFSEG
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(0); // 0
}


// ================================================
// 0xea0f: WORD 'UNK_0xea11' codep=0x224c parp=0xea11
// ================================================

void UNK_0xea11() // UNK_0xea11
{
  if (Pop() == 0) goto label1;
  _at_DS(); // @DS
  Push(Pop() + Pop()); // +
  return;

  label1:
  Push(pp_LFSEG); // LFSEG
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xea25: WORD 'PUSHVECT' codep=0x224c parp=0xea27
// ================================================

void PUSHVECT() // PUSHVECT
{
  Push(pp_BUF_dash_SEG); // BUF-SEG
  Push(Read16(Pop())); // @
  Push(pp_DBUF_dash_SEG); // DBUF-SEG
  Push(Read16(Pop())); // @
  _eq_(); // =
  Push(pp_BLTSEG); // BLTSEG
  Push(Read16(Pop())); // @
  UNK_0xe9f3(); // UNK_0xe9f3
  Push(pp__3DSEG); // 3DSEG
  Push(Read16(Pop())); // @
  UNK_0xe9f3(); // UNK_0xe9f3
  Push(cc_UNK_0xdfae); // UNK_0xdfae
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Func1("VECTORERRORS");
  Push(Read16(Pop())); // @
  i++;
  } while(i<imax); // (LOOP) 0xfff8

}


// ================================================
// 0xea4f: WORD 'POPVECT' codep=0x224c parp=0xea51
// ================================================

void POPVECT() // POPVECT
{
  Push(0); // 0
  Push(cc_UNK_0xdfae); // UNK_0xdfae
  Push(Pop()-1); // 1-

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Func1("VECTORERRORS");
  _ex_(); // !
  Push(cc__dash_1); // -1
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff6

  UNK_0xea11(); // UNK_0xea11
  Push(pp__3DSEG); // 3DSEG
  _ex_(); // !
  UNK_0xea11(); // UNK_0xea11
  Push(pp_BLTSEG); // BLTSEG
  _ex_(); // !
  if (Pop() == 0) goto label1;
  Push(pp_DBUF_dash_SEG); // DBUF-SEG
  goto label2;

  label1:
  Push(pp_HBUF_dash_SEG); // HBUF-SEG

  label2:
  Push(Read16(Pop())); // @
  Push(pp_BUF_dash_SEG); // BUF-SEG
  _ex_(); // !
}


// ================================================
// 0xea85: WORD 'UNK_0xea87' codep=0x224c parp=0xea87
// ================================================

void UNK_0xea87() // UNK_0xea87
{
  UNK_0xe394(); // UNK_0xe394

  UNK_0x3f3b("LOADING GAME IN PROGRESS...");
  UNK_0xe3b0(); // UNK_0xe3b0
  Push(0x0037);
  Push(0x0011);
  POS_dot_(); // POS.
  PRINT("PLEASE WAIT", 11); // (.")
  _gt_0FONT(); // >0FONT
}


// ================================================
// 0xeac5: WORD 'UNK_0xeac7' codep=0x224c parp=0xeac7
// ================================================

void UNK_0xeac7() // UNK_0xeac7
{
  UNK_0xe394(); // UNK_0xe394

  UNK_0x3f3b("...GAME LOAD COMPLETE.");
  UNK_0xe3b0(); // UNK_0xe3b0
  Push(0x05dc);
  MS(); // MS
}


// ================================================
// 0xeaec: WORD 'UNK_0xeaee' codep=0x224c parp=0xeaee
// ================================================

void UNK_0xeaee() // UNK_0xeaee
{
  UNK_0xe394(); // UNK_0xe394

  UNK_0x3f3b("SAVING GAME...");
  UNK_0xe3b0(); // UNK_0xe3b0
  Push(0x0037);
  Push(0x0011);
  POS_dot_(); // POS.
  PRINT("PLEASE WAIT", 11); // (.")
  _gt_0FONT(); // >0FONT
}


// ================================================
// 0xeb1f: WORD 'UNK_0xeb21' codep=0x224c parp=0xeb21
// ================================================

void UNK_0xeb21() // UNK_0xeb21
{
  UNK_0xe394(); // UNK_0xe394

  UNK_0x3f3b("GAME SAVE COMPLETE.");
  UNK_0xe3b0(); // UNK_0xe3b0
  UNK_0xe5e9(); // UNK_0xe5e9
}


// ================================================
// 0xeb3f: WORD 'PRMSAV' codep=0xeb4a parp=0xeb4a
// ================================================
// 0xeb4a: pop    bx
// 0xeb4b: mov    [bx],sp
// 0xeb4d: inc    bx
// 0xeb4e: inc    bx
// 0xeb4f: push   si
// 0xeb50: push   di
// 0xeb51: mov    di,bx
// 0xeb53: mov    si,[078C]
// 0xeb57: sub    si,03E8
// 0xeb5b: mov    cx,03E8
// 0xeb5e: repz   
// 0xeb5f: movsb
// 0xeb60: pop    di
// 0xeb61: pop    si
// 0xeb62: lodsw
// 0xeb63: mov    bx,ax
// 0xeb65: jmp    word ptr [bx]

// ================================================
// 0xeb67: WORD 'PRMLOD' codep=0xeb72 parp=0xeb72
// ================================================
// 0xeb72: pop    bx
// 0xeb73: mov    sp,[bx]
// 0xeb75: inc    bx
// 0xeb76: inc    bx
// 0xeb77: mov    [bp-02],si
// 0xeb7a: mov    [bp-04],di
// 0xeb7d: mov    si,bx
// 0xeb7f: cli    
// 0xeb80: push   ds
// 0xeb81: pop    es
// 0xeb82: mov    di,[078C]
// 0xeb86: sub    di,03E8
// 0xeb8a: mov    cx,03E8
// 0xeb8d: repz   
// 0xeb8e: movsb
// 0xeb8f: add    sp,[DE72]
// 0xeb93: mov    si,[bp-02]
// 0xeb96: mov    di,[bp-04]
// 0xeb99: sti    
// 0xeb9a: lodsw
// 0xeb9b: mov    bx,ax
// 0xeb9d: jmp    word ptr [bx]

// ================================================
// 0xeb9f: WORD 'RETSAV' codep=0xebaa parp=0xebaa
// ================================================
// 0xebaa: pop    bx
// 0xebab: mov    [bx],bp
// 0xebad: inc    bx
// 0xebae: inc    bx
// 0xebaf: push   si
// 0xebb0: push   di
// 0xebb1: mov    di,bx
// 0xebb3: mov    si,[078E]
// 0xebb7: sub    si,00DC
// 0xebbb: mov    cx,00DC
// 0xebbe: repz   
// 0xebbf: movsb
// 0xebc0: pop    di
// 0xebc1: pop    si
// 0xebc2: lodsw
// 0xebc3: mov    bx,ax
// 0xebc5: jmp    word ptr [bx]

// ================================================
// 0xebc7: WORD 'RETJMP' codep=0xebd2 parp=0xebd2
// ================================================
// 0xebd2: cli    
// 0xebd3: push   ds
// 0xebd4: pop    es
// 0xebd5: pop    bx
// 0xebd6: mov    bp,[bx]
// 0xebd8: inc    bx
// 0xebd9: inc    bx
// 0xebda: mov    si,bx
// 0xebdc: push   di
// 0xebdd: mov    di,[078E]
// 0xebe1: sub    di,00DC
// 0xebe5: mov    cx,00DC
// 0xebe8: repz   
// 0xebe9: movsb
// 0xebea: pop    di
// 0xebeb: add    bp,[DE6E]
// 0xebef: mov    si,[bp+00]
// 0xebf2: inc    bp
// 0xebf3: inc    bp
// 0xebf4: sti    
// 0xebf5: lodsw
// 0xebf6: mov    bx,ax
// 0xebf8: jmp    word ptr [bx]

// ================================================
// 0xebfa: WORD 'UNK_0xebfc' codep=0x224c parp=0xebfc
// ================================================

void UNK_0xebfc() // UNK_0xebfc
{
  _gt_R(); // >R
  Push(Read16(sp)); // DUP
  Push(0); // 0
  Push(0x0400);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+

  label1:
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label2;
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__4); // 4
  PICK(); // PICK
  Push(i); // I
  Push(0x0040);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(cc__4); // 4
  PICK(); // PICK
  _at_DS(); // @DS
  Push(cc__5); // 5
  PICK(); // PICK
  Push(i); // I
  Push(Pop() + Pop()); // +
  BLOCK(); // BLOCK
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  Push(h); // J
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xe8b0(); // UNK_0xe8b0
  Push(cc__9); // 9
  PICK(); // PICK
  Push(cc_UNK_0xde7a); // UNK_0xde7a
  UMIN(); // UMIN
  LCMOVE(); // LCMOVE
  Push(h); // J
  if (Pop() == 0) goto label3;
  UPDATE(); // UPDATE

  label3:
  Push(cc__5); // 5
  PICK(); // PICK
  Push(cc_UNK_0xde7a); // UNK_0xde7a
  UMIN(); // UMIN
  UNK_0xe9b9(); // UNK_0xe9b9
  Pop(); // DROP
  Pop(); Pop();// 2DROP
  Push(0x0400);
  _dash_(); // -
  i++;
  } while(i<imax); // (LOOP) 0xffb0

  Push(i); // I
  if (Pop() == 0) goto label2;
  SAVE_dash_BUFFERS(); // SAVE-BUFFERS

  label2:
  R_gt_(); // R>
  Pop(); // DROP
  Pop(); Pop();// 2DROP
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xec7e: WORD 'UNK_0xec80' codep=0x224c parp=0xec80
// ================================================

void UNK_0xec80() // UNK_0xec80
{
  Push(0); // 0
  UNK_0xebfc(); // UNK_0xebfc
}


// ================================================
// 0xec86: WORD 'UNK_0xec88' codep=0x224c parp=0xec88
// ================================================

void UNK_0xec88() // UNK_0xec88
{
  Push(1); // 1
  UNK_0xebfc(); // UNK_0xebfc
}


// ================================================
// 0xec8e: WORD 'UNK_0xec90' codep=0x224c parp=0xec90
// ================================================

void UNK_0xec90() // UNK_0xec90
{
  Push(pp_LFSEG); // LFSEG
  Push(Read16(Pop())); // @
  Push(0x0032);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xec9c: WORD 'UNK_0xec9e' codep=0x224c parp=0xec9e
// ================================================

void UNK_0xec9e() // UNK_0xec9e
{
  Push(pp_SYSK); // SYSK
  Push(Read16(Pop())); // @
  Push(0x0040);
  Push(Pop() * Pop()); // *
  Push(Pop()-1); // 1-
  UNK_0xec90(); // UNK_0xec90
  _dash_(); // -
  Push(Pop()<<4); // 16*
}


// ================================================
// 0xecb2: WORD 'UNK_0xecb4' codep=0x224c parp=0xecb4
// ================================================

void UNK_0xecb4() // UNK_0xecb4
{
  UNK_0xec90(); // UNK_0xec90
  Push(0); // 0
  Push(cc_UNK_0xde6a); // UNK_0xde6a
  UNK_0xec9e(); // UNK_0xec9e
  UNK_0xec88(); // UNK_0xec88
}


// ================================================
// 0xecc0: WORD 'UNK_0xecc2' codep=0x224c parp=0xecc2
// ================================================

void UNK_0xecc2() // UNK_0xecc2
{
  UNK_0xec90(); // UNK_0xec90
  Push(0); // 0
  Push(cc_UNK_0xde6a); // UNK_0xde6a
  UNK_0xec9e(); // UNK_0xec9e
  UNK_0xec80(); // UNK_0xec80
  LOAD_dash_CO(); // LOAD-CO
}


// ================================================
// 0xecd0: WORD 'UNK_0xecd2' codep=0x224c parp=0xecd2
// ================================================

void UNK_0xecd2() // UNK_0xecd2
{
  UNK_0xe0fa(); // UNK_0xe0fa
  Push(0); // 0
  Push(cc_UNK_0xde5e); // UNK_0xde5e
  Push(cc_UNK_0xde76); // UNK_0xde76
  UNK_0xec88(); // UNK_0xec88
}


// ================================================
// 0xecde: WORD 'UNK_0xece0' codep=0x224c parp=0xece0
// ================================================

void UNK_0xece0() // UNK_0xece0
{
  UNK_0xe0fa(); // UNK_0xe0fa
  Push(0); // 0
  Push(cc_UNK_0xde5e); // UNK_0xde5e
  Push(cc_UNK_0xde76); // UNK_0xde76
  UNK_0xec80(); // UNK_0xec80
}


// ================================================
// 0xecec: WORD 'UNK_0xecee' codep=0x224c parp=0xecee
// ================================================

void UNK_0xecee() // UNK_0xecee
{
  Push(pp_OVA); // OVA
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xde7e); // UNK_0xde7e
  _dash_(); // -
}


// ================================================
// 0xecf8: WORD 'UNK_0xecfa' codep=0x224c parp=0xecfa
// ================================================

void UNK_0xecfa() // UNK_0xecfa
{
  _at_DS(); // @DS
  Push(cc_UNK_0xde7e); // UNK_0xde7e
  Push(cc_UNK_0xde5a); // UNK_0xde5a
  UNK_0xecee(); // UNK_0xecee
  UNK_0xec80(); // UNK_0xec80
}


// ================================================
// 0xed06: WORD 'UNK_0xed08' codep=0x224c parp=0xed08
// ================================================

void UNK_0xed08() // UNK_0xed08
{
  _at_DS(); // @DS
  Push(cc_UNK_0xde7e); // UNK_0xde7e
  Push(cc_UNK_0xde5a); // UNK_0xde5a
  UNK_0xecee(); // UNK_0xecee
  UNK_0xec88(); // UNK_0xec88
}


// ================================================
// 0xed14: WORD 'UNK_0xed16' codep=0x224c parp=0xed16
// ================================================

void UNK_0xed16() // UNK_0xed16
{
  Push(cc_UNK_0xde62); // UNK_0xde62
  BLOCK(); // BLOCK
  RETSAV(); // RETSAV
  UPDATE(); // UPDATE
}


// ================================================
// 0xed20: WORD 'UNK_0xed22' codep=0x224c parp=0xed22
// ================================================

void UNK_0xed22() // UNK_0xed22
{
  Push(cc_UNK_0xde62); // UNK_0xde62
  BLOCK(); // BLOCK
  Push(pp_UNK_0xde86); // UNK_0xde86
  Push(0x00de);
  CMOVE(); // CMOVE
}


// ================================================
// 0xed30: WORD 'UNK_0xed32' codep=0x224c parp=0xed32
// ================================================

void UNK_0xed32() // UNK_0xed32
{
  Push(cc_UNK_0xde66); // UNK_0xde66
  BLOCK(); // BLOCK
  PRMSAV(); // PRMSAV
  UPDATE(); // UPDATE
}


// ================================================
// 0xed3c: WORD 'UNK_0xed3e' codep=0x224c parp=0xed3e
// ================================================

void UNK_0xed3e() // UNK_0xed3e
{
  Push(cc_UNK_0xde66); // UNK_0xde66
  BLOCK(); // BLOCK
  PRMLOD(); // PRMLOD
}


// ================================================
// 0xed46: WORD 'UNK_0xed48' codep=0x224c parp=0xed48
// ================================================

void UNK_0xed48() // UNK_0xed48
{
  UNK_0xeaee(); // UNK_0xeaee
  Push(pp_UNK_0xdf6a); // UNK_0xdf6a
  OFF(); // OFF
  _ro_RESTORE_rc_(); // (RESTORE)
  UNK_0xed08(); // UNK_0xed08
  UNK_0xecd2(); // UNK_0xecd2
  UNK_0xecb4(); // UNK_0xecb4
  UNK_0xed32(); // UNK_0xed32
  UNK_0xed16(); // UNK_0xed16
  Push(pp_UNK_0xdf6a); // UNK_0xdf6a
  Push(Read16(Pop())); // @
  Func3(":CKSUM");
  _ex_(); // !
  _ro_SETUP_rc_(); // (SETUP)
  SAVE_dash_BUFFERS(); // SAVE-BUFFERS
}


// ================================================
// 0xed68: WORD 'UNK_0xed6a' codep=0x224c parp=0xed6a
// ================================================

void UNK_0xed6a() // UNK_0xed6a
{
  Func3(":SAVE");
  _ex_(); // !
}


// ================================================
// 0xed70: WORD 'UNK_0xed72' codep=0x224c parp=0xed72
// ================================================

void UNK_0xed72() // UNK_0xed72
{
  UNK_0xe647(); // UNK_0xe647
  UNK_0xe659(); // UNK_0xe659
  UNK_0xe647(); // UNK_0xe647
  UNK_0xe64f(); // UNK_0xe64f
  Push(1); // 1
  UNK_0xed6a(); // UNK_0xed6a
  SWAP(); // SWAP
  UNK_0xe63f(); // UNK_0xe63f
  MOUNTA(); // MOUNTA
  UNK_0xe64f(); // UNK_0xe64f
  Push(1); // 1
  UNK_0xed6a(); // UNK_0xed6a
  UNK_0xe63f(); // UNK_0xe63f
  SAVE_dash_BUFFERS(); // SAVE-BUFFERS
}


// ================================================
// 0xed90: WORD 'UNK_0xed92' codep=0x224c parp=0xed92
// ================================================

void UNK_0xed92() // UNK_0xed92
{
  Push(0); // 0
  UNK_0xed6a(); // UNK_0xed6a
  MOUNTB(); // MOUNTB
  Push(0); // 0
  UNK_0xed6a(); // UNK_0xed6a
  SAVE_dash_BUFFERS(); // SAVE-BUFFERS
}


// ================================================
// 0xeda0: WORD 'UNK_0xeda2' codep=0x224c parp=0xeda2
// ================================================

void UNK_0xeda2() // UNK_0xeda2
{
  Push(cc_UNK_0xdfaa); // UNK_0xdfaa
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Func1("HOST");
  Push(Read16(Pop())); // @
  i++;
  } while(i<imax); // (LOOP) 0xfff8

  _ro_RESTORE_rc_(); // (RESTORE)
}


// ================================================
// 0xedb6: WORD 'UNK_0xedb8' codep=0x224c parp=0xedb8
// ================================================

void UNK_0xedb8() // UNK_0xedb8
{
  Push(0); // 0
  Push(cc_UNK_0xdfaa); // UNK_0xdfaa
  Push(Pop()-1); // 1-

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Func1("HOST");
  _ex_(); // !
  Push(cc__dash_1); // -1
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff6

  CFIGARRAYS(); // CFIGARRAYS
  _ro_SETUP_rc_(); // (SETUP)
  UNK_0xe0b6(); // UNK_0xe0b6
  BLD_dash_DIS(); // BLD-DIS
  BLD_dash_MV(); // BLD-MV
  SETDBUF(); // SETDBUF
}


// ================================================
// 0xedda: WORD 'UNK_0xeddc' codep=0x224c parp=0xeddc
// ================================================

void UNK_0xeddc() // UNK_0xeddc
{
  UNK_0xea87(); // UNK_0xea87
  Push(pp_UNK_0xdf6a); // UNK_0xdf6a
  OFF(); // OFF
  EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
  UNK_0xeda2(); // UNK_0xeda2
  UNK_0xecfa(); // UNK_0xecfa
  UNK_0xedb8(); // UNK_0xedb8
  UNK_0xece0(); // UNK_0xece0
  UNK_0xecc2(); // UNK_0xecc2
  UNK_0xed3e(); // UNK_0xed3e
  UNK_0xed22(); // UNK_0xed22
  Push(pp_UNK_0xdf6a); // UNK_0xdf6a
  Push(Read16(Pop())); // @
  Func3(":CKSUM");
  Push(Read16(Pop())); // @
  _eq_(); // =
  if (Pop() == 0) goto label1;
  UNK_0xeac7(); // UNK_0xeac7
  return;

  label1:
  UNK_0xe78c(); // UNK_0xe78c
}


// ================================================
// 0xee0a: WORD 'LOAD.GAME' codep=0x224c parp=0xee15
// ================================================

void LOAD_dot_GAME() // LOAD.GAME
{
  NEWDOSMSGS(); // NEWDOSMSGS
  _gt_DISPLAY(); // >DISPLAY
  DARK(); // DARK
  UNK_0xe3bc(); // UNK_0xe3bc
  UNK_0xe5c1(); // UNK_0xe5c1
  EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
  OFFCACHE(); // OFFCACHE
  UNK_0xe7b6(); // UNK_0xe7b6
  MOUNTA(); // MOUNTA
  UNK_0xeddc(); // UNK_0xeddc
  UNK_0xed92(); // UNK_0xed92
  _gt_LORES(); // >LORES
  Push(pp_RESUME); // RESUME
  ON(); // ON
  Push(pp_UNK_0xde86); // UNK_0xde86
  RETJMP(); // RETJMP
}


// ================================================
// 0xee37: WORD 'UNK_0xee39' codep=0x224c parp=0xee39
// ================================================

void UNK_0xee39() // UNK_0xee39
{
  _gt_DISPLAY(); // >DISPLAY
  DARK(); // DARK
  UNK_0xe3bc(); // UNK_0xe3bc
  UNK_0xe599(); // UNK_0xe599
  UNK_0xed72(); // UNK_0xed72
  UNK_0xed48(); // UNK_0xed48
  Push(cc__3); // 3
  UNMOUNT(); // UNMOUNT
  MOUNTB(); // MOUNTB
  Push(0); // 0
  BLOCK(); // BLOCK
  Push(Read16(sp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  SWAP(); // SWAP
  C_ex_(); // C!
  SAVE_dash_BUFFERS(); // SAVE-BUFFERS
  Push(2); // 2
  UNMOUNT(); // UNMOUNT
  UNK_0xeb21(); // UNK_0xeb21
}


// ================================================
// 0xee61: WORD 'UNK_0xee63' codep=0x224c parp=0xee63
// ================================================

void UNK_0xee63() // UNK_0xee63
{
  Push(0x00c9);
  Func14(EMIT); // call of word 0x2731 '(EMIT)'
  Push(0x00cd);
  SWAP(); // SWAP
  EMITS(); // EMITS
  Push(0x00bb);
  Func14(EMIT); // call of word 0x2731 '(EMIT)'
}


// ================================================
// 0xee79: WORD 'UNK_0xee7b' codep=0x224c parp=0xee7b
// ================================================

void UNK_0xee7b() // UNK_0xee7b
{
  Push(0x00ba);
  Func14(EMIT); // call of word 0x2731 '(EMIT)'
  Push(tt_ROW); // ROW
  Push(Read8(Pop())&0xFF); // C@
  SWAP(); // SWAP
  Push(tt_COL); // COL
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  Push(0x00ba);
  Func14(EMIT); // call of word 0x2731 '(EMIT)'
}


// ================================================
// 0xee97: WORD 'UNK_0xee99' codep=0x224c parp=0xee99
// ================================================

void UNK_0xee99() // UNK_0xee99
{
  Push(0x00c8);
  Func14(EMIT); // call of word 0x2731 '(EMIT)'
  Push(0x00cd);
  SWAP(); // SWAP
  EMITS(); // EMITS
  Push(0x00bc);
  Func14(EMIT); // call of word 0x2731 '(EMIT)'
}


// ================================================
// 0xeeaf: WORD 'UNK_0xeeb1' codep=0x224c parp=0xeeb1
// ================================================

void UNK_0xeeb1() // UNK_0xeeb1
{
  _gt_R(); // >R
  _gt_R(); // >R
  _2DUP(); // 2DUP
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  Push(h); // I'
  UNK_0xee63(); // UNK_0xee63
  R_gt_(); // R>
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  _2DUP(); // 2DUP
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  Push(h); // J
  UNK_0xee7b(); // UNK_0xee7b
  i++;
  } while(i<imax); // (LOOP) 0xfff0

  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  R_gt_(); // R>
  UNK_0xee99(); // UNK_0xee99
}


// ================================================
// 0xeee3: WORD 'UNK_0xeee5' codep=0x224c parp=0xeee5
// ================================================

void UNK_0xeee5() // UNK_0xeee5
{

  label1:
  Push(0x0016);
  Push(0x0028);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  Push(2); // 2
  SPACES(); // SPACES
  Push(0x0016);
  Push(0x0028);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  PAD(); // PAD
  Push(2); // 2
  Func14(EXPECT); // call of word 0x1d3e '(EXPECT)'
  PAD(); // PAD
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0031);
  Push(0x0036);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  PAD(); // PAD
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0030);
  _dash_(); // -
  Push(pp__ask_TANDRG); // ?TANDRG
  OFF(); // OFF
  UNK_0xe012(); // UNK_0xe012
  if (Pop() == 0) goto label2;
  Push(pp__ask_TANDRG); // ?TANDRG
  ON(); // ON
  Push(Read16(sp)); // DUP
  Push(2); // 2
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Push(Pop()+1); // 1+

  label2:
  Push(pp__ask_EGA); // ?EGA
  OFF(); // OFF
  Push(Read16(sp)); // DUP
  Push(cc__5); // 5
  _eq_(); // =
  if (Pop() == 0) return;
  Push(Pop()-2); // 2-
  Push(pp__ask_EGA); // ?EGA
  ON(); // ON
}


// ================================================
// 0xef4f: WORD 'SET.DISPLAY.MODE' codep=0x224c parp=0xef5a
// ================================================

void SET_dot_DISPLAY_dot_MODE() // SET.DISPLAY.MODE
{
  _gt_ALPHA(); // >ALPHA
  Func14(PAGE); // call of word 0x274c '(PAGE)'
  Push(cc__6); // 6
  Push(0x0015);
  Push(0x000b);
  Push(0x0028);
  UNK_0xeeb1(); // UNK_0xeeb1
  Push(cc__8); // 8
  Push(0x001c);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("1. Black/white", 14); // (.")
  Push(0x000a);
  Push(0x001c);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("2. RGB", 6); // (.")
  Push(0x000c);
  Push(0x001c);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("3. Color TV or Composite", 24); // (.")
  Push(0x000e);
  Push(0x001c);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("4. Hercules (monochrome)", 24); // (.")
  Push(0x0010);
  Push(0x001c);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("5. EGA", 6); // (.")
  Push(0x0013);
  Push(0x0016);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("S E L E C T   D I S P L A Y   M O D E", 37); // (.")
  Push(0x0014);
  Push(0x001a);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("A N D  P R E S S  R E T U R N", 29); // (.")
  UNK_0xeee5(); // UNK_0xeee5
  Push(pp_MONITOR); // MONITOR
  _ex_(); // !
  SET_dot_COLORS(); // SET.COLORS
  LOAD_dash_CO(); // LOAD-CO
  SETDBUF(); // SETDBUF
  _gt_DISPLAY(); // >DISPLAY
  _gt_LORES(); // >LORES
  DARK(); // DARK
}


// ================================================
// 0xf067: WORD 'UNK_0xf069' codep=0x224c parp=0xf069
// ================================================

void UNK_0xf069() // UNK_0xf069
{
  Push(0x1bee);
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x0064);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x03e8);
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  NOP(); // NOP
  j++;
  } while(j<jmax); // (LOOP) 0xfffc

  i++;
  } while(i<imax); // (LOOP) 0xfff0

  TIME(); // TIME
  _2_at_(); // 2@
  _2SWAP(); // 2SWAP
  D_dash_(); // D-
  Pop(); // DROP
  _slash_(); // /
  Push(1); // 1
  MAX(); // MAX
  Push(0x5245);
  _ex_(); // !
}


// ================================================
// 0xf0a3: WORD 'POLICE.WARNING' codep=0x224c parp=0xf0ae
// ================================================

void POLICE_dot_WARNING() // POLICE.WARNING
{
  _gt_ALPHA(); // >ALPHA
  _gt_0FONT(); // >0FONT
  Func14(PAGE); // call of word 0x274c '(PAGE)'
  Push(1); // 1
  Push(cc__7); // 7
  Push(0x0012);
  Push(0x003e);
  UNK_0xeeb1(); // UNK_0xeeb1
  Push(2); // 2
  Push(0x000f);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("I N T E R S T E L   P O L I C E   W A R N I N G", 47); // (.")
  Push(cc__4); // 4
  Push(0x000a);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("As provided by the Galactic Treaty of 4410, this  computer", 58); // (.")
  Push(cc__5); // 5
  Push(0x000a);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("software  product  is  hereby  declared  the  Intellectual", 58); // (.")
  Push(cc__6); // 6
  Push(0x000a);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("Property of the Human authors, Binary Systems.  All rights", 58); // (.")
  Push(cc__7); // 7
  Push(0x000a);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("are  henceforth  reserved  in  space and time.", 46); // (.")
  Push(cc__9); // 9
  Push(0x000a);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("Provision for the protection of  Intellectual Property  is", 58); // (.")
  Push(0x000a);
  Push(0x000a);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("covered under Section 8.9.1A-F of the  Intangible Property", 58); // (.")
  Push(0x000b);
  Push(0x000a);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("Act of 4506,  ratified by all beings except the Gazurtoid.", 58); // (.")
  Push(0x000d);
  Push(0x000a);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("Included  in   Section  8.9.1A-C   is  the  provision  for", 58); // (.")
  Push(0x000e);
  Push(0x000a);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("Interstel Corporate Police to enforce the Law.", 46); // (.")
  Push(0x0010);
  Push(0x000a);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("WARNING:  Any  being  caught with an unauthorized  copy or", 58); // (.")
  Push(0x0011);
  Push(0x000a);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("version  of  this  Software  Product  will  be punished by", 58); // (.")
  Push(0x0012);
  Push(0x000a);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("Interstel Corporate Police.  Punishment  may  include  the", 58); // (.")
  Push(0x0013);
  Push(0x000a);
  Func14(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("destruction of the offending being.", 35); // (.")
  UNK_0xf069(); // UNK_0xf069
  Push(0x9c40); Pust(0x0000);
  UNK_0xe61d(); // UNK_0xe61d
  Func14(PAGE); // call of word 0x274c '(PAGE)'
  SET_dot_COLORS(); // SET.COLORS
  _gt_LORES(); // >LORES
  DARK(); // DARK
}


// ================================================
// 0xf472: WORD 'NEW.GA' codep=0x224c parp=0xf47d
// ================================================

void NEW_dot_GA() // NEW.GA
{
  GDE(); // GDE
  UNK_0xe66f(); // UNK_0xe66f
  ESCENABLE(); // ESCENABLE
  Push(tt_TIB); // TIB
  Push(Read16(Pop())); // @
  Push(0x0050);
  Push(0); // 0
  FILL(); // FILL
  PORTM(); // PORTM
}


// ================================================
// 0xf493: WORD 'GET-OPTION#' codep=0x224c parp=0xf495
// ================================================

void GET_dash_OPTION_n_() // GET-OPTION#
{

  label1:
  _i_KEY(); // 'KEY
  Push(0x0031);
  Push(0x0034);
  WITHIN(); // WITHIN
  Push(pp_LKEY); // LKEY
  Push(Read16(Pop())); // @
  Push(0x0039);
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(pp_LKEY); // LKEY
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf4b7: WORD 'UNK_0xf4b9' codep=0x224c parp=0xf4b9
// ================================================

void UNK_0xf4b9() // UNK_0xf4b9
{
  Push(pp_RESUME); // RESUME
  ON(); // ON
}


// ================================================
// 0xf4bf: WORD 'GAMEOPCASE' codep=0x4a4f parp=0xf4ca
// ================================================
// 0xf4ca: db 0x03 0x00 0xd9 0x8f 0x31 0x00 0x39 0xee 0x32 0x00 0xb9 0xf4 0x33 0x00 0x5a 0xef '    1 9 2   3 Z '

// ================================================
// 0xf4da: WORD '>GAMEOPTIONS' codep=0x224c parp=0xf4dc
// ================================================

void _gt_GAMEOPTIONS() // >GAMEOPTIONS
{
  ESCDISABLE(); // ESCDISABLE
  FLUSH(); // FLUSH
  OFFCACHE(); // OFFCACHE
  PUSHVECT(); // PUSHVECT
  NEWDOSMSGS(); // NEWDOSMSGS
  PRESERVEDISPLAY(); // PRESERVEDISPLAY
}


// ================================================
// 0xf4ea: WORD 'GAMEOPTIONS' codep=0x224c parp=0xf4ec
// ================================================

void GAMEOPTIONS() // GAMEOPTIONS
{
  Push(pp_RESUME); // RESUME
  OFF(); // OFF

  label1:
  _dot_GAMEOPS(); // .GAMEOPS
  GET_dash_OPTION_n_(); // GET-OPTION#
  Pop();
  switch(Pop()) // GAMEOPCASE
  {
  case 49:
    UNK_0xee39(); // UNK_0xee39
    break;
  case 50:
    UNK_0xf4b9(); // UNK_0xf4b9
    break;
  case 51:
    SET_dot_DISPLAY_dot_MODE(); // SET.DISPLAY.MODE
    break;
  default:
    BYE(); // BYE
    break;

  }
  Push(pp_RESUME); // RESUME
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  _dot_RESUMING(); // .RESUMING
}


// ================================================
// 0xf502: WORD '<GAMEOPTIONS' codep=0x224c parp=0xf504
// ================================================

void _st_GAMEOPTIONS() // <GAMEOPTIONS
{
  RESTOREDISPLAY(); // RESTOREDISPLAY
  ONCACHE(); // ONCACHE
  POPVECT(); // POPVECT
  ESCENABLE(); // ESCENABLE
  GDE(); // GDE
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0xf512: WORD 'GAMEOPS' codep=0x224c parp=0xf51d
// ================================================
// entry

void GAMEOPS() // GAMEOPS
{
  _gt_GAMEOPTIONS(); // >GAMEOPTIONS
  GAMEOPTIONS(); // GAMEOPTIONS
  _st_GAMEOPTIONS(); // <GAMEOPTIONS
}


// ================================================
// 0xf525: WORD 'UNK_0xf527' codep=0x224c parp=0xf527
// ================================================

void UNK_0xf527() // UNK_0xf527
{
  Func3(":TIMESTAMP");
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf52d: WORD 'START.GAME' codep=0x224c parp=0xf538
// ================================================
// entry

void START_dot_GAME() // START.GAME
{
  SET_dot_DISPLAY_dot_MODE(); // SET.DISPLAY.MODE
  GDE(); // GDE
  UNK_0xe7ee(); // UNK_0xe7ee
  if (Pop() == 0) goto label1;
  UNK_0xe824(); // UNK_0xe824

  label1:
  Push(0xb5aa);
  MODULE(); // MODULE
  POLICE_dot_WARNING(); // POLICE.WARNING
  UNK_0xf527(); // UNK_0xf527
  if (Pop() == 0) goto label2;
  LOAD_dot_GAME(); // LOAD.GAME
  return;

  label2:
  NEW_dot_GA(); // NEW.GA
}

// 0xf55c: db 0x47 0x41 0x4d 0x45 0x00 'GAME '
  