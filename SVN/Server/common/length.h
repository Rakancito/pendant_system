// Search

WEAR_MAX = 32

// add before

#ifdef ITEM_TALISMAN_EQUIPMENT
	WEAR_PENDANT, // 27
#endif


/* #### Fix by RayJhP #### */
//Search:

enum EAttributeSet

// Add after ATTRIBUTE_SET_EAR,
#ifdef ITEM_TALISMAN_EQUIPMENT
	ATTRIBUTE_SET_PENDANT,
#endif
