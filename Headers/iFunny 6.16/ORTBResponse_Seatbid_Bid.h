//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GPBMessage.h>

@class GPBAny, NSMutableArray, NSString;

@interface ORTBResponse_Seatbid_Bid : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *burl; // @dynamic burl;
@property(copy, nonatomic) NSString *cid; // @dynamic cid;
@property(copy, nonatomic) NSString *deal; // @dynamic deal;
@property(nonatomic) unsigned int exp; // @dynamic exp;
@property(retain, nonatomic) NSMutableArray *extArray; // @dynamic extArray;
@property(readonly, nonatomic) unsigned long long extArray_Count; // @dynamic extArray_Count;
@property(nonatomic) _Bool hasMedia; // @dynamic hasMedia;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *item; // @dynamic item;
@property(copy, nonatomic) NSString *lurl; // @dynamic lurl;
@property(retain, nonatomic) NSMutableArray *macroArray; // @dynamic macroArray;
@property(readonly, nonatomic) unsigned long long macroArray_Count; // @dynamic macroArray_Count;
@property(retain, nonatomic) GPBAny *media; // @dynamic media;
@property(copy, nonatomic) NSString *mid; // @dynamic mid;
@property(nonatomic) double price; // @dynamic price;
@property(copy, nonatomic) NSString *purl; // @dynamic purl;
@property(copy, nonatomic) NSString *tactic; // @dynamic tactic;

@end

