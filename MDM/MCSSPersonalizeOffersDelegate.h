/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MCSSRequestDelegate.h"


#import "SSPersonalizeOffersDelegate.h"



@class SSPersonalizeOffersRequest, SSPersonalizeOffersResponse;



@interface MCSSPersonalizeOffersDelegate : MCSSRequestDelegate <SSPersonalizeOffersDelegate>

{

    SSPersonalizeOffersResponse *_response;

}



+ (id)instanceWithItems:(id)arg1;

- (void).cxx_destruct;

- (void)personalizeOffersRequest:(id)arg1 didReceiveResponse:(id)arg2;

- (void)startCompletionBlock:(id)arg1;



// Remaining properties

@property(readonly, nonatomic) SSPersonalizeOffersRequest *request; // @dynamic request;



@end


