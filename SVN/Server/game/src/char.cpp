// Search

	GetDesc()->Packet(&p, sizeof(TPacketGCTarget));
}

void CHARACTER::BroadcastTargetPacket()

// Add before

#ifdef ELEMENT_TARGET
	const int ELEMENT_BASE = 11;
	DWORD curElementBase = ELEMENT_BASE;
	DWORD raceFlag;
	if (m_pkChrTarget && m_pkChrTarget->IsMonster() && (raceFlag = m_pkChrTarget->GetMobTable().dwRaceFlag) >= RACE_FLAG_ATT_ELEC)
	{
		for (int i = RACE_FLAG_ATT_ELEC; i <= RACE_FLAG_ATT_DARK; i *= 2)
		{
			curElementBase++;
			int diff = raceFlag - i;
			if (abs(diff) <= 1024)
				break;
		}
		p.bElement = curElementBase - ELEMENT_BASE;
	}
	else
	{
		p.bElement = 0;
	}

#endif

// Search

		case POINT_NORMAL_HIT_DEFEND_BONUS:
			SetPoint(type, GetPoint(type) + amount);
			val = GetPoint(type);
			break;

// Add after

#ifdef ELEMENT_NEW_BONUSES
		case POINT_ATTBONUS_ELEC:
		case POINT_ATTBONUS_FIRE:
		case POINT_ATTBONUS_ICE:
		case POINT_ATTBONUS_WIND:
		case POINT_ATTBONUS_EARTH:
		case POINT_ATTBONUS_DARK:

		case POINT_RESIST_HUMAN:

		case POINT_RESIST_SWORD_REDUCTION:		
		case POINT_RESIST_TWOHAND_REDUCTION:	
		case POINT_RESIST_DAGGER_REDUCTION:	
		case POINT_RESIST_BELL_REDUCTION:		
		case POINT_RESIST_FAN_REDUCTION:		
		case POINT_RESIST_BOW_REDUCTION:

		case POINT_ATTBONUS_ZODIAC:
		case POINT_ATTBONUS_DESERT:
		case POINT_ATTBONUS_INSECT:	
#ifdef ENABLE_WOLFMAN_CHARACTER
		case POINT_RESIST_CLAW_REDUCTION:
#endif
#endif

// Search

			PointChange(aApplyInfo[bApplyType].bPointType, iVal);
			break;

// Add before

#ifdef ELEMENT_NEW_BONUSES
		case APPLY_ATTBONUS_ELEC: // 99
		case APPLY_ATTBONUS_FIRE: // 100
		case APPLY_ATTBONUS_ICE: // 101
		case APPLY_ATTBONUS_WIND: // 102
		case APPLY_ATTBONUS_EARTH: // 103
		case APPLY_ATTBONUS_DARK: // 104
		case APPLY_RESIST_HUMAN: // 105

		case APPLY_RESIST_SWORD_REDUCTION: //106		
		case APPLY_RESIST_TWOHAND_REDUCTION: //107
		case APPLY_RESIST_DAGGER_REDUCTION:	//108
		case APPLY_RESIST_BELL_REDUCTION: //109		
		case APPLY_RESIST_FAN_REDUCTION: //110		
		case APPLY_RESIST_BOW_REDUCTION: //111

		case APPLY_ATTBONUS_ZODIAC: //112
		case APPLY_ATTBONUS_DESERT: //113
		case APPLY_ATTBONUS_INSECT: //114	
#ifdef ENABLE_WOLFMAN_CHARACTER
		case APPLY_RESIST_CLAW_REDUCTION: //115
#endif
#endif