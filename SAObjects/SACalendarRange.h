/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AceObject.h"


#import "SAAceSerializable.h"



@class SACalendar;



@interface SACalendarRange : AceObject <SAAceSerializable>

{

}



+ (id)calendarRange;

+ (id)calendarRangeWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;

@property(retain, nonatomic) SACalendar *end;

- (id)groupIdentifier;

@property(retain, nonatomic) SACalendar *start;



@end


