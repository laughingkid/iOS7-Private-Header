/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSKAnnotation.h"



@class NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor;



@protocol TSDAnnotationHosting <NSObject, TSKAnnotation>

@property(retain, nonatomic) TSKAnnotationAuthor *author;

- (void)commitText:(id)arg1;

@property(readonly, nonatomic) NSDate *date;

- (_Bool)isEqual:(id)arg1;

@property(nonatomic) id <TSKModel> model;



@optional

@property(readonly, nonatomic) NSString *changeTrackingString;

- (id)commandForDeletingComment;

@property(copy, nonatomic) TSDCommentStorage *storage;

@end


