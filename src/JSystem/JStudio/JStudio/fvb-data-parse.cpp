//
// Generated By: dol2asm
// Translation Unit: fvb-data-parse
//

#include "JSystem/JStudio/JStudio/fvb-data-parse.h"

//
// Types:
//

//
// Forward References:
//

//
// External References:
//

//
// Declarations:
//

/* 802850AC-80285114 27F9EC 0068+00 0/0 1/1 0/0 .text
 * getData__Q47JStudio3fvb4data17TParse_TParagraphCFPQ57JStudio3fvb4data17TParse_TParagraph5TData */
void JStudio::fvb::data::TParse_TParagraph::getData(TParse_TParagraph::TData* data) const
{
	u16* parse = (u16*)JGadget::binary::parseVariableUInt_16_32_following(getRaw(), (u32*)data, (u32*)&data->u32Type, NULL);
	u32 t      = (u32)data->u32Size;
	if (!t) {
		data->pContent = NULL;
		data->next    = parse;
	} else {
		data->pContent = parse;
		data->next    = parse + ((t + 3) >> 1 & ~1);
	}
}