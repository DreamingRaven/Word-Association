# Word-Association : C Appendix : [N,N] Matrix

For everyone:

	Example:
	
	AARDVARK  Mss:13  MssA:15.10 Conc:0.00 ConcA:5.76 Freq: 0 ConnA: 8 ResP:0.10 ConnM:0.80 UI:0.77

			  |AAR|ANI|ANT|ANT|PIN|MUS|NOS|UGL|CON|DIC|FUR|ROA|SHE|ZOO|#Co|PrT|µSt|Mss|PrA|
	__________|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|
	AARDVARK  | - |.32|.20|.O6|.O3|.O2|.O2|.O2|.O1|.O1|.O1|.O1|.O1|.O1| - | - | - | - | - |
	__________|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|
	ANIMAL    |   |   |   |   |   |   |   |   |   |   |.O2|   |   |.O2| 2 |.17|.O2|28 |.O7|
	__________|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|
	ANT       |   |   |   |.O2|   |   |   |   |   |   |   |   |   |   | 1 |.O8|.O2|14 |.O7|
	__________|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|
	ANTEATER  |.12|.18|.29|   |   |   |   |.O2|   |   |   |   |   |   | 3 |.25|.16| 9 |.33|
	__________|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|
	MUSIC     |   |   |   |   |   |   |   |   |   |   |   |   |   |   | 0 |.O0|.O0|25 |.O0|
	__________|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|
	NOSE      |   |   |   |   |   |   |   |   |   |   |   |   |   |   | 0 |.O0|.O0|15 |.O0|
	__________|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|
	UGLY      |   |   |   |   |   |   |   |   |   |   |   |   |   |   | 0 |.O0|.O0|14 |.O0|
	__________|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|
	DICTIONARY|   |   |   |   |   |   |   |   |   |   |   |   |   |   | 0 |.O0|.O0| 8 |.O0|
	__________|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|
	FUR       |   |.15|   |   |   |   |   |   |   |   |   |   |   |   | 1 |.O8|.15|13 |.O8|
	__________|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|
	SHELL     |   |   |   |   |   |   |   |   |   |   |   |   |   |   | 0 |.O0|.O0|17 |.O0|
	__________|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|
	ZOO       |   |.65|   |   |   |   |   |   |   |   |   |   |   |   | 1 |.O8|.65| 8 |.13|
	__________|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|___|
	#Connect  |  1|  3|  1|  1|  0|  0|  0|  1|  0|  0|  1|  0|  0|  1|
	ProbConnec|.10|.33|.11|.11|.O0|.O0|.O0|.11|.O0|.O0|.11|.O0|.O0|.11|
	µ Strength|.12|.33|.29|.O2|.O0|.O0|.O0|.O2|.O0|.O0|.O2|.O0|.O0|.O2|

	M.I.A.: PINK PANTHER-.O3 CONFUSED-.O1 ROAD KILL-.O1 
	
Quick Ref:

	-	FSG		Forward Cue-to-Target Strength
	-	BSG		Backward Target-to-Cue Strength
	-	MSG		Mediated Strength
	-	OSG		Overlapping Associate Strength (similar asc between words)
	-	QSS		Cue: 	Set Size
	-	TSS		Target: Set Size
	-	QFR		Cue: 	Frequency
	-	TFR		Target: Frequency
	-	QMC		Cue: 	Mean Connectivity Among its Associates
	-	TMC		Target: Mean Connectivity Among its Associates
	-	QUC		Cue: 	Use Code
	-	TUC		Target: Use Code
	
	-	A Cue, Target, norm, related information
	-	B differentley formated version of above
	-	C Matrix version with back and forwards asc
	-	D Idiosyncratic relations (hot, cold)
	-	E Accessibility index (how easily a word is asc)
	-	F Rhyme, fragment cues. (BALL, BA-- , -ALL)
	
Relevant Sources:

	Nelson, D. L., McEvoy, C. L., and Schreiber, T. A. (1998) 
	The University of South Florida word association, rhyme, and word 	
	fragment norms. Accessed from http://w3.usf.edu/FreeAssociation/ 
	[2016/03/01].
		
