//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/VKApiObject.h>

@class NSNumber, NSString;

@interface VKSchool : VKApiObject
{
    NSNumber *_id;
    NSNumber *_country;
    NSNumber *_city;
    NSString *_name;
    NSNumber *_year_from;
    NSNumber *_year_to;
    NSNumber *_year_graduated;
    NSString *_Mclass;
    NSString *_speciality;
    NSNumber *_type;
    NSString *_type_str;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *type_str; // @synthesize type_str=_type_str;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *speciality; // @synthesize speciality=_speciality;
@property(retain, nonatomic) NSString *Mclass; // @synthesize Mclass=_Mclass;
@property(retain, nonatomic) NSNumber *year_graduated; // @synthesize year_graduated=_year_graduated;
@property(retain, nonatomic) NSNumber *year_to; // @synthesize year_to=_year_to;
@property(retain, nonatomic) NSNumber *year_from; // @synthesize year_from=_year_from;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *city; // @synthesize city=_city;
@property(retain, nonatomic) NSNumber *country; // @synthesize country=_country;
@property(retain, nonatomic) NSNumber *id; // @synthesize id=_id;
- (id)initWithDictionary:(id)arg1;

@end

