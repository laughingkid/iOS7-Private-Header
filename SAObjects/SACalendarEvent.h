/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SADomainObject.h"


@class NSArray, NSDate, NSNumber, NSString, NSURL;



@interface SACalendarEvent : SADomainObject

{

}



+ (id)event;

+ (id)eventWithDictionary:(id)arg1 context:(id)arg2;

@property(copy, nonatomic) NSArray *alerts;

@property(nonatomic) _Bool allDay;

@property(copy, nonatomic) NSArray *attendees;

@property(copy, nonatomic) NSURL *calendarId;

- (id)encodedClassName;

@property(copy, nonatomic) NSDate *endDate;

- (id)groupIdentifier;

@property(retain, nonatomic) NSNumber *includeRecurrences;

@property(copy, nonatomic) NSString *location;

@property(copy, nonatomic) NSString *notes;

@property(copy, nonatomic) NSArray *participants;

@property(retain, nonatomic) NSNumber *readOnly;

@property(copy, nonatomic) NSArray *recurrences;

@property(copy, nonatomic) NSDate *startDate;

@property(copy, nonatomic) NSString *timeZoneId;

@property(copy, nonatomic) NSString *title;

- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;



@end

