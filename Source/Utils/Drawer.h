/*
 * Copyright 2015 Your Name <your@email.address>
 * All rights reserved. Distributed under the terms of the MIT license.
 */
#ifndef DRAWER_H
#define DRAWER_H


#include <SupportDefs.h>
#include <InterfaceDefs.h>
#include <View.h>
#include <Font.h>

#include <stdlib.h>
#include <String.h>

class Drawer {
public:

	Drawer(BView *parent);
	~Drawer();
	
	void DrawString(BRect frame, const char *text);
	void SetInsets(BSize insets);
	
private:
	const char *GetStringFromWidth(const char *input, BFont font, float width, BString &output);
	int32 CharactedFittedFor(BString text, BFont *font, float width) const;
	
	BView 			*fParent;
	BSize 			fInsets;
};


#endif // _H
