//
// @file MBError.h
// @author Joachim LeBlanc
// @date June 19 2012
// @copyright
//   2012 Joachim LeBlanc <demosdemon@gmail.com> \n
//   This program is made available under the terms of the MIT License.
//
// @brief Base class for all errors

/// Helperclass to create error objects from webservice responses
@interface MBError : NSError

+ (NSError *) errorWithString:(NSString *)string;

/// Creates an NSError from the XMLElement
///
/// @param element XML Element that represents `<error/>` from webservice response
- (NSError *) initWithElement:(NSXMLElement *)element;


@end
