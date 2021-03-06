//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GSCPImageIdentifier, NSString;

@interface GSCPImageResource : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(copy, nonatomic) NSString *altText; // @dynamic altText;
@property(nonatomic) int contentType; // @dynamic contentType;
@property(nonatomic) _Bool hasAltText; // @dynamic hasAltText;
@property(nonatomic) _Bool hasContentType; // @dynamic hasContentType;
@property(nonatomic) _Bool hasHeight; // @dynamic hasHeight;
@property(nonatomic) _Bool hasIdentifier; // @dynamic hasIdentifier;
@property(nonatomic) _Bool hasIsLocalFile; // @dynamic hasIsLocalFile;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(nonatomic) _Bool hasWidth; // @dynamic hasWidth;
@property(nonatomic) int height; // @dynamic height;
@property(retain, nonatomic) GSCPImageIdentifier *identifier; // @dynamic identifier;
@property(nonatomic) _Bool isLocalFile; // @dynamic isLocalFile;
@property(nonatomic) int width; // @dynamic width;

@end

