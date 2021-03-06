// 
// @file MBDisc.m
// @author Brandon LeBlanc
// @date Jun 06 2012
// @copyright 
//   2012 Brandon LeBlanc <demosdemon@gmail.com> \n
//   This program is made available under the terms of the MIT License.
//
// @brief Work entity

#if ! __has_feature(objc_arc)
# warning This file must be compiled with ARC. Use -fobjc-arc flag (or convert project to ARC).
#endif

#import "MB.h"

@implementation MBDisc

MB_ATTRIBUTE(Id);
MB_NUMBER_ELEMENT(Sectors);
MB_ELEMENT(ReleaseList);

@end
