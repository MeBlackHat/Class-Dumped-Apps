//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WARankingStatusRankingConfiguration : NSObject
{
    double _st_1d;
    double _st_7d;
    double _st_28d;
    double _st_84d;
    double _w_reply;
    double _w_recency;
    double _w_ignore;
    double _w_softignore;
    double _w_nonstatus;
    double _w_incoming;
    double _w_outgoing;
    double _w_media;
    double _w_call;
    double _w_group;
    double _w_chrono;
}

@property(nonatomic) double w_chrono; // @synthesize w_chrono=_w_chrono;
@property(nonatomic) double w_group; // @synthesize w_group=_w_group;
@property(nonatomic) double w_call; // @synthesize w_call=_w_call;
@property(nonatomic) double w_media; // @synthesize w_media=_w_media;
@property(nonatomic) double w_outgoing; // @synthesize w_outgoing=_w_outgoing;
@property(nonatomic) double w_incoming; // @synthesize w_incoming=_w_incoming;
@property(nonatomic) double w_nonstatus; // @synthesize w_nonstatus=_w_nonstatus;
@property(nonatomic) double w_softignore; // @synthesize w_softignore=_w_softignore;
@property(nonatomic) double w_ignore; // @synthesize w_ignore=_w_ignore;
@property(nonatomic) double w_recency; // @synthesize w_recency=_w_recency;
@property(nonatomic) double w_reply; // @synthesize w_reply=_w_reply;
@property(nonatomic) double st_84d; // @synthesize st_84d=_st_84d;
@property(nonatomic) double st_28d; // @synthesize st_28d=_st_28d;
@property(nonatomic) double st_7d; // @synthesize st_7d=_st_7d;
@property(nonatomic) double st_1d; // @synthesize st_1d=_st_1d;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

