#pragma once

//npc offsets/////////////////////////////////////////////////////////////////////
//start correction
//DWORD npcoff1 = 0x40;
//datablock size
const WORD npcoff2 = 0x10f0;
//x
const WORD npcoff11 = 0x384;
//y
const WORD npcoff22 = 0x38c;
//name
const WORD npcoffname = 0x148;
//anim
const WORD npcoff33 = 0xD68;
// local ? 06 other 02
const WORD npcoff44 = 0xc;
// player nr? 00
const WORD npcoff55 = 0x76;
// id 
const WORD npcoff66 = 0x1020;
// life 
const WORD npcoff77 = 0x1058;
//combat
const WORD npctest77 = 0x107c;
//floor
const WORD npcoff88 = 0x290;
//activ 1
const WORD npca1 = 0x8;
//activ 2
const WORD npca2 = 0xc;
// local ? 06
const WORD npcoff99 = 0xc;
// hover/not needed
const WORD npcoff111 = 0x4B4;
// movin, 144 not, 152 startin, 156 full speed//br
const WORD npcoff222 = 0x298;
//xmid
const WORD npcoffxm = 0x88;
//ymid
const WORD npcoffym = 0x8c;
//xsize
const WORD npcoffxsize = 0x80;
//ysize
const WORD npcoffysize = 0x90;
///player///////////////////////////////////////////////////////////
//start correction
const WORD poff1 = 0x40;
//datablock size
const WORD poff2 = 0x2000;
//x
const WORD poff11 = 0x384;
//y
const WORD poff22 = 0x38c;
//name
const WORD poffname = 0x148;
//anim
const WORD poff33 = 0xD68;
// local ? 06 other 02
const WORD poff44 = 0xc;
// player nr? 00
const WORD poff55 = 0x76;
// id 
const WORD poff66 = 0x1020;
// life 
const WORD poff77 = 0x1058;
//combat
const WORD ptest77 = 0x107C;
//floor
const WORD poff88 = 0x290;
//activ 1
const WORD pa1 = 0x8;
//activ 2
const WORD pa2 = 0xc;
// local ? 06
const WORD poff99 = 0xc;
// hover
const WORD poff111 = 0x4B4;
// movin, 144 not, 152 startin, 156 full speed/broken
const WORD poff222 = 0x298;
//pray type
const WORD poff1111 = 0x1078;
////////////////////////Interfaces1///////////////////////////////////////////
//dif
const WORD Ioff2 = 0x278;
//points to text
const WORD Ioff00 = 0xb8;
//x
const WORD Ioff11 = 0x70;
//y
const WORD Ioff22 = 0x74;
//xs
const WORD Ioff33 = 0x78;
//ys
const WORD Ioff44 = 0x7c;
//xs2
const WORD Ioff332 = 0x90;
//ys2
const WORD Ioff442 = 0x94;
//ids
const WORD Ioff55 = 0x30;
//hover
const WORD Ioffhhh = 0x1A0;
//activ
const WORD Ioff555 = 0x8;
const WORD Ioff666 = 0xc;
//text
//WORD Ioff4 = 0x334;
//odd data array//timer
const WORD Itimeroff = 0x1a8;
const WORD Itimeroff2 = 0x150;
//////////////////////////Interface2//////////////////////////////////////////////////
//dif
const WORD I2off2 = 0x288;
//points to text
const WORD I2off00 = 0xb8;
//x
const WORD I2off11 = 0x70;
//y
const WORD I2off22 = 0x74;
//xs
const WORD I2off33 = 0x78;
//ys
const WORD I2off44 = 0x7c;
//xs2
const WORD I2off332 = 0x90;
//ys2
const WORD I2off442 = 0x94;
//ids
const WORD I2off55 = 0x30;
//item ids
const WORD I2offitemids = 0x1f8;
//hover
const WORD Ioffhhh2 = 0x1A0;
//activ
const WORD I2off555 = 0x8;
const WORD I2off666 = 0xc;
//text
//WORD I2off4 = 0x334;
//odd data array//timer?
const WORD I2timeroff = 0x3e8;
//////////////////////////BankInterfaces//////////////////////////////////////////////////
//dif
const WORD I3off2 = 0x2a0;
//x
const WORD I3off11 = 0x70;
//y
const WORD I3off22 = 0x74;
//xs
const WORD I3off33 = 0x78;
//ys
const WORD I3off44 = 0x7c;
//xs2
const WORD I3off332 = 0x90;
//ys2
const WORD I3off442 = 0x94;
//ids
const WORD I3off55 = 0x30;
//item ids
const WORD I3offitemids = 0x1f0;
//hover
const WORD Ioffhhh3 = 0x198;
//activ
const WORD I3off555 = 0x8;
const WORD I3off666 = 0xc;
//text
//WORD I2off4 = 0x334;
//odd data array//timer
const WORD I3timeroff = 0x3e8;
////////////////activobjects//////////////////////////////////////////////////////////////////////
//dif//step
const WORD aooff2 = 0x300;
//y
const WORD aooff11 = 0x15c;
//x
const WORD aooff22 = 0x160;
//ids
const WORD aooff33 = 0x198;
//to the text in other array
const WORD aoofftx = 0x200;
//first action text
const WORD aoofftx2 = 0xa8;
//ids unique
const WORD aooff44 = 0x118;
//choped down boolean
const WORD aooff77 = 0x17d;
//activ
const WORD aooff55 = 0x8;
const WORD aooff66 = 0xc;
//xm
const WORD aooffxm = 0x88;
//ym
const WORD aooffym = 0x8c;
//xs
const WORD aooffxs = 0x80;
//ys
const WORD aooffys = 0x90;
///////////decorobj//////////////////////////////////////////////////////////////
//dif//step
const DWORD dooff2 = 0x138;
//y
const WORD dooff11 = 0x10c;
//x
const WORD dooff22 = 0x110;
//ids
const WORD dooff33 = 0x118;
//ids in other array
const WORD dooff44 = 0x40;
//to the text in other array
const WORD doofftx = 0x200;
//activ
const WORD dooff55 = 0x8;
const WORD dooff66 = 0xc;
//xm
const WORD dooffxm = 0x88;
//ym
const WORD dooffym = 0x8c;
///////////grounditems/////////////////////////////////////////////////////////////////
const WORD goff2 = 0x9a0;
//x
const WORD goff11 = 0x994;
//y
const WORD goff22 = 0x99c;
//to id
const WORD goff33 = 0x130;
// floor
const WORD goff5 = 0x98C - 0x4;
//xmid
const WORD goffxm = 0x88;
//ymid
const WORD goffym = 0x8c;
// activ
const WORD goff6 = 0x8;
// activ
const WORD goff7 = 0xc;
//other arr id 
const WORD gotherid = 0x20;
//other arr am
const WORD gotheram = 0x24;
///////////////allobj////////////////////////////////////////////////////////////////
//start
const WORD alloff1 = 0x70;
//step
const WORD alloff2 = 0x1d0;
//x -256.f)/512.f
const WORD alloff11 = 0x30;
//y -256.f)/512.f
const WORD alloff22 = 0x38;
//crc32
const WORD alloff44 = 0x60;
//type
const WORD alloff55 = 0x198;
//screen timer partial
const WORD alloff66 = 0x1a4;
//on screen fully bool
const WORD alloff77 = 0x1c5;
//backto all
const WORD alloff88 = 0x58;
//current z height
const WORD alloff99 = 0x5c;









