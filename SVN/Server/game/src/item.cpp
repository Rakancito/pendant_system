// Search

	else if (GetWearFlag() & WEARABLE_ARROW)
		return WEAR_ARROW;

// or 

	else if (GetWearFlag() & WEARABLE_EAR)
		return WEAR_EAR;

// Add after

#ifdef ITEM_TALISMAN_EQUIPMENT
	else if (GetWearFlag() & WEARABLE_PENDANT)
		return WEAR_PENDANT;
#endif

// okey, it's important this part, if you not find WEARABLE because you are using a different version of src you need search, and thanks
// .Rewn for the fix.

// Search

    else if (GetType() == ITEM_COSTUME)
    {
        ...
    }

//Add after

    else if (GetType() == ITEM_ARMOR)
    {
        if (GetSubType() == ARMOR_BODY)
            return WEAR_BODY;
        else if (GetSubType() == ARMOR_HEAD)
            return WEAR_HEAD;
        else if (GetSubType() == ARMOR_SHIELD)
            return WEAR_SHIELD;
        else if (GetSubType() == ARMOR_WRIST)
            return WEAR_WRIST;
        else if (GetSubType() == ARMOR_FOOTS)
            return WEAR_FOOTS;
        else if (GetSubType() == ARMOR_NECK)
            return WEAR_NECK;
        else if (GetSubType() == ARMOR_EAR)
            return WEAR_EAR;
#ifdef ENABLE_PENDANT
        else if (GetSubType() == ARMOR_PENDANT)
            return WEAR_PENDANT;
#endif
    }


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


