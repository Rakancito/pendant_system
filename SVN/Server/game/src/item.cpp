// Search

	else if (GetWearFlag() & WEARABLE_ARROW)
		return WEAR_ARROW;

// Add after

#ifdef ITEM_TALISMAN_EQUIPMENT
	else if (GetWearFlag() & WEARABLE_PENDANT)
		return WEAR_PENDANT;
#endif


// Search

		case ITEM_ARMOR:
			{
				// ??? body? ????? armor? ?? ?? ?? ?? ???? ??? ?? ? ?.
				if (0 != m_pOwner->GetWear(WEAR_COSTUME_BODY))
					break;
				if (GetSubType() == ARMOR_BODY || GetSubType() == ARMOR_HEAD || GetSubType() == ARMOR_FOOTS || GetSubType() == ARMOR_SHIELD)

// Replace the "if" condition with:

#ifdef ITEM_TALISMAN_EQUIPMENT
				if (GetSubType() == ARMOR_BODY || GetSubType() == ARMOR_HEAD || GetSubType() == ARMOR_FOOTS || GetSubType() == ARMOR_SHIELD || GetSubType() == ARMOR_PENDANT)
#else
				if (GetSubType() == ARMOR_BODY || GetSubType() == ARMOR_HEAD || GetSubType() == ARMOR_FOOTS || GetSubType() == ARMOR_SHIELD)
#endif


