/*
 *  Homework_2.cp
 *  Homework 2
 *
 *  Created by Jason Booras on 10/26/14.
 *  Copyright (c) 2014 Jason Booras. All rights reserved.
 *
 */

#include "Homework_2.h"
#include "Homework_2Priv.h"

CFStringRef Homework_2UUID(void)
{
	CHomework_2* theObj = new CHomework_2;
	return theObj->UUID();
}

CFStringRef CHomework_2::UUID()
{
	return CFSTR("0001020304050607");
}
