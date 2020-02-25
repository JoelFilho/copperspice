/***********************************************************************
*
* Copyright (c) 2012-2020 Barbara Geller
* Copyright (c) 2012-2020 Ansel Sermersheim
*
* Copyright (c) 2015 The Qt Company Ltd.
* Copyright (c) 2012-2016 Digia Plc and/or its subsidiary(-ies).
* Copyright (c) 2008-2012 Nokia Corporation and/or its subsidiary(-ies).
*
* This file is part of CopperSpice.
*
* CopperSpice is free software. You can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public License
* version 2.1 as published by the Free Software Foundation.
*
* CopperSpice is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*
* https://www.gnu.org/licenses/
*
***********************************************************************/

/* NOTE: This file is AUTO GENERATED by qtokenautomaton2cpp.xsl. */

#include <qxslttokenlookup_p.h>

using namespace QPatternist;

XSLTTokenLookup::NodeName XSLTTokenLookup::classifier2(QStringView data)
{
   if (data.startsWith("as"))  {
      return As;

   } else if (data.startsWith("id"))   {
      return Id;

   } else if (data.startsWith("if"))   {
      return If;

   }

   return NoKeyword;
}

XSLTTokenLookup::NodeName XSLTTokenLookup::classifier3(QStringView data)
{
   if (data.startsWith("key"))  {
      return Key;

   } else if (data.startsWith("use"))   {
      return Use;
   }

   return NoKeyword;
}

XSLTTokenLookup::NodeName XSLTTokenLookup::classifier4(QStringView data)
{
   if (data.startsWith("copy"))  {
      return Copy;

   } else if (data.startsWith("href"))  {
      return Href;

   } else if (data.startsWith("lang"))  {
      return Lang;

   } else if (data.startsWith("mode"))  {
      return Mode;

   } else if (data.startsWith("name"))  {
      return Name;

   } else if (data.startsWith("sort"))  {
      return Sort;

   } else if (data.startsWith("test"))  {
      return Test;

   } else if (data.startsWith("text"))  {
       return Text;

   } else if (data.startsWith("type"))  {
       return Type;

   } else if  (data.startsWith("when"))  {
       return When;

   }

   return NoKeyword;
}

XSLTTokenLookup::NodeName XSLTTokenLookup::classifier5(QStringView data)
{
   if (data.startsWith("flags"))  {
      return Flags;

   } else if (data.startsWith("match"))  {
      return Match;

   } else if (data.startsWith("order"))  {
      return Order;

   } else if (data.startsWith("param"))  {
      return Param;

   } else if (data.startsWith("regex"))  {
      return Regex;

   }

   return NoKeyword;
}

XSLTTokenLookup::NodeName XSLTTokenLookup::classifier6(QStringView data)
{
   if (data.startsWith("choose"))  {
      return Choose;

   } else if (data.startsWith("format"))  {
      return Format;

   } else if (data.startsWith("import"))  {
      return Import;

   } else if (data.startsWith("indent"))  {
      return Indent;

   } else if (data.startsWith("method"))  {
      return Method;

   } else if (data.startsWith("output"))  {
      return Output;

   } else if (data.startsWith("select"))  {
      return Select;

   } else if (data.startsWith("stable"))  {
      return Stable;

   } else if (data.startsWith("tunnel"))  {
      return Tunnel;

   }

   return NoKeyword;
}

XSLTTokenLookup::NodeName XSLTTokenLookup::classifier7(QStringView data)
{
   if (data.startsWith("comment"))  {
      return Comment;

   } else if (data.startsWith("copy-of"))  {
      return CopyOf;

   } else if (data.startsWith("element"))  {
      return Element;

   } else if (data.startsWith("include"))  {
      return Include;

   } else if (data.startsWith("message"))  {
       return Message;

   } else if (data.startsWith("version"))  {
      return Version;

   }

   return NoKeyword;
}

XSLTTokenLookup::NodeName XSLTTokenLookup::classifier8(QStringView data)
{
   if (data.startsWith("document"))  {
       return Document;

   } else if (data.startsWith("elements"))  {
      return Elements;

   } else if (data.startsWith("encoding"))  {
      return Encoding;

   } else if (data.startsWith("for-each"))  {
      return ForEach;

   } else if (data.startsWith("function"))  {
      return Function;

   } else if (data.startsWith("override"))  {
      return Override;

   } else if (data.startsWith("priority"))  {
      return Priority;

   } else if (data.startsWith("required"))  {
      return Required;

   } else if (data.startsWith("sequence"))  {
      return Sequence;

   } else if (data.startsWith("template"))  {
      return Template;

   } else if (data.startsWith("use-when"))  {
      return UseWhen;

   } else if (data.startsWith("value-of"))  {
      return ValueOf;

   } else if (data.startsWith("variable"))  {
      return Variable;

   }

   return NoKeyword;
}

XSLTTokenLookup::NodeName XSLTTokenLookup::classifier9(QStringView data)
{
    if (data.startsWith("attribute"))  {
      return Attribute;

   } else if (data.startsWith("collation"))  {
      return Collation;

   } else if (data.startsWith("data-type"))  {
      return DataType;

   } else if (data.startsWith("namespace"))  {
      return Namespace;

   } else if (data.startsWith("otherwise"))  {
      return Otherwise;

   } else if (data.startsWith("separator"))  {
      return Separator;

   } else if (data.startsWith("terminate"))  {
      return Terminate;

   } else if (data.startsWith("transform"))  {
      return Transform;

   }

   return NoKeyword;
}

XSLTTokenLookup::NodeName XSLTTokenLookup::classifier10(QStringView data)
{
   if (data.startsWith("case-order"))  {
      return CaseOrder;

   } else if (data.startsWith("media-type"))  {
       return MediaType;

   } else if (data.startsWith("standalone"))  {
      return Standalone;

   } else if (data.startsWith("stylesheet"))  {
      return Stylesheet;

   } else if (data.startsWith("validation"))  {
      return Validation;

   } else if (data.startsWith("with-param"))  {
      return WithParam;

   }

   return NoKeyword;
}

XSLTTokenLookup::NodeName XSLTTokenLookup::classifier11(QStringView data)
{
   if (data.startsWith("strip-space"))  {
      return StripSpace;
   }

   return NoKeyword;
}

XSLTTokenLookup::NodeName XSLTTokenLookup::classifier12(QStringView data)
{
   if (data.startsWith("perform-sort"))  {
      return PerformSort;
   }

   return NoKeyword;
}

XSLTTokenLookup::NodeName XSLTTokenLookup::classifier13(QStringView data)
{
   if (data.startsWith("attribute-set"))  {
      return AttributeSet;

   } else if (data.startsWith("call-template"))  {
      return CallTemplate;

   } else if (data.startsWith("import-schema"))  {
      return ImportSchema;
   }

   return NoKeyword;
}

XSLTTokenLookup::NodeName XSLTTokenLookup::classifier14(QStringView data)
{
   if (data.startsWith("analyze-string"))  {
      return AnalyzeString;

   } else if (data.startsWith("doctype-public"))  {
      return DoctypePublic;

   } else if (data.startsWith("doctype-system"))  {
      return DoctypeSystem;

   } else if (data.startsWith("output-version"))  {
      return OutputVersion;

   } else if (data.startsWith("preserve-space"))  {
      return PreserveSpace;

   }

   return NoKeyword;
}

XSLTTokenLookup::NodeName XSLTTokenLookup::classifier15(QStringView data)
{
   if (data.startsWith("apply-templates"))  {
      return ApplyTemplates;

   } else if (data.startsWith("byte-order-mark"))  {
      return ByteOrderMark;

   } else if (data.startsWith("copy-namespaces"))  {
      return CopyNamespaces;

   } else if (data.startsWith("result-document"))  {
      return ResultDocument;

   } else if (data.startsWith("schema-location"))  {
      return SchemaLocation;

   }

   return NoKeyword;
}

XSLTTokenLookup::NodeName XSLTTokenLookup::classifier17(QStringView data)
{
   if (data.startsWith("default-collation"))  {
      return DefaultCollation;
   }

   return NoKeyword;
}

XSLTTokenLookup::NodeName XSLTTokenLookup::classifier18(QStringView data)
{
   if (data.startsWith("default-validation"))  {
      return DefaultValidation;

   } else if (data.startsWith("inherit-namespaces"))  {
      return InheritNamespaces;

   } else if (data.startsWith("matching-substring"))  {
      return MatchingSubstring;

   } else if (data.startsWith("normalization-form"))  {
      return NormalizationForm;

   } else if (data.startsWith("undeclare-prefixes"))  {
      return UndeclarePrefixes;

   } else if (data.startsWith("use-attribute-sets"))  {
      return UseAttributeSets;

   } else if (data.startsWith("use-character-maps"))  {
      return UseCharacterMaps;

   }

   return NoKeyword;
}

XSLTTokenLookup::NodeName XSLTTokenLookup::classifier20(QStringView data)
{
   if (data.startsWith("include-content-type"))  {
      return IncludeContentType;

   } else if (data.startsWith("omit-xml-declaration"))  {
      return OmitXmlDeclaration;

   }

   return NoKeyword;
}

XSLTTokenLookup::NodeName XSLTTokenLookup::classifier21(QStringView data)
{
   if (data.startsWith("escape-uri-attributes"))  {
      return EscapeUriAttributes;
   }

   return NoKeyword;
}

XSLTTokenLookup::NodeName XSLTTokenLookup::classifier22(QStringView data)
{
   if (data.startsWith("cdata-section-elements"))  {
      return CdataSectionElements;

   } else if (data.startsWith("input-type-annotations"))  {
      return InputTypeAnnotations;

   } else if (data.startsWith("non-matching-substring"))  {
      return NonMatchingSubstring;

   } else if (data.startsWith("processing-instruction"))  {
      return ProcessingInstruction;

   }

   return NoKeyword;
}

XSLTTokenLookup::NodeName XSLTTokenLookup::classifier23(QStringView data)
{
   if (data.startsWith("exclude-result-prefixes"))  {
      return ExcludeResultPrefixes;

   } else if (data.startsWith("xpath-default-namespace"))  {
      return XpathDefaultNamespace;

   }

   return NoKeyword;
}

XSLTTokenLookup::NodeName XSLTTokenLookup::classifier26(QStringView data)
{
   if (data.startsWith("extension-element-prefixes"))  {
      return ExtensionElementPrefixes;
   }

   return NoKeyword;
}

XSLTTokenLookup::NodeName XSLTTokenLookup::toToken(QStringView data, int length)
{
   switch (length) {

      case 2:
         return classifier2(data);

      case 3:
         return classifier3(data);

      case 4:
         return classifier4(data);

      case 5:
         return classifier5(data);

      case 6:
         return classifier6(data);

      case 7:
         return classifier7(data);

      case 8:
         return classifier8(data);

      case 9:
         return classifier9(data);

      case 10:
         return classifier10(data);

      case 11:
         return classifier11(data);

      case 12:
         return classifier12(data);

      case 13:
         return classifier13(data);

      case 14:
         return classifier14(data);

      case 15:
         return classifier15(data);

      case 17:
         return classifier17(data);

      case 18:
         return classifier18(data);

      case 20:
         return classifier20(data);

      case 21:
         return classifier21(data);

      case 22:
         return classifier22(data);

      case 23:
         return classifier23(data);

      case 26:
         return classifier26(data);

      default:
         return NoKeyword;
   }
}

QString XSLTTokenLookup::toString(NodeName token)
{
   const char *data = nullptr;
   int length = 0;

   switch (token) {

      case AnalyzeString: {
         static const char staticallyStoredAnalyzeString[] = {
            97, 110, 97, 108, 121, 122, 101, 45, 115, 116, 114, 105, 110, 103, 0
         };
         data = staticallyStoredAnalyzeString;
         length = 14;
         break;
      }

      case ApplyTemplates: {
         static const char staticallyStoredApplyTemplates[] = {
            97, 112, 112, 108, 121, 45, 116, 101, 109, 112, 108, 97, 116, 101, 115, 0
         };
         data = staticallyStoredApplyTemplates;
         length = 15;
         break;
      }

      case As: {
         static const char staticallyStoredAs[] = {
            97, 115, 0
         };
         data = staticallyStoredAs;
         length = 2;
         break;
      }

      case Attribute: {
         static const char staticallyStoredAttribute[] = {
            97, 116, 116, 114, 105, 98, 117, 116, 101, 0
         };
         data = staticallyStoredAttribute;
         length = 9;
         break;
      }

      case AttributeSet: {
         static const char staticallyStoredAttributeSet[] = {
            97, 116, 116, 114, 105, 98, 117, 116, 101, 45, 115, 101, 116, 0
         };
         data = staticallyStoredAttributeSet;
         length = 13;
         break;
      }

      case ByteOrderMark: {
         static const char staticallyStoredByteOrderMark[] = {
            98, 121, 116, 101, 45, 111, 114, 100, 101, 114, 45, 109, 97, 114, 107, 0
         };
         data = staticallyStoredByteOrderMark;
         length = 15;
         break;
      }

      case CallTemplate: {
         static const char staticallyStoredCallTemplate[] = {
            99, 97, 108, 108, 45, 116, 101, 109, 112, 108, 97, 116, 101, 0
         };
         data = staticallyStoredCallTemplate;
         length = 13;
         break;
      }

      case CaseOrder: {
         static const char staticallyStoredCaseOrder[] = {
            99, 97, 115, 101, 45, 111, 114, 100, 101, 114, 0
         };
         data = staticallyStoredCaseOrder;
         length = 10;
         break;
      }

      case CdataSectionElements: {
         static const char staticallyStoredCdataSectionElements[] = {
            99, 100, 97, 116, 97, 45, 115, 101, 99, 116, 105, 111, 110, 45, 101, 108, 101, 109, 101, 110, 116, 115, 0
         };
         data = staticallyStoredCdataSectionElements;
         length = 22;
         break;
      }

      case Choose: {
         static const char staticallyStoredChoose[] = {
            99, 104, 111, 111, 115, 101, 0
         };
         data = staticallyStoredChoose;
         length = 6;
         break;
      }

      case Collation: {
         static const char staticallyStoredCollation[] = {
            99, 111, 108, 108, 97, 116, 105, 111, 110, 0
         };
         data = staticallyStoredCollation;
         length = 9;
         break;
      }

      case Comment: {
         static const char staticallyStoredComment[] = {
            99, 111, 109, 109, 101, 110, 116, 0
         };
         data = staticallyStoredComment;
         length = 7;
         break;
      }

      case Copy: {
         static const char staticallyStoredCopy[] = {
            99, 111, 112, 121, 0
         };
         data = staticallyStoredCopy;
         length = 4;
         break;
      }

      case CopyNamespaces: {
         static const char staticallyStoredCopyNamespaces[] = {
            99, 111, 112, 121, 45, 110, 97, 109, 101, 115, 112, 97, 99, 101, 115, 0
         };
         data = staticallyStoredCopyNamespaces;
         length = 15;
         break;
      }

      case CopyOf: {
         static const char staticallyStoredCopyOf[] = {
            99, 111, 112, 121, 45, 111, 102, 0
         };
         data = staticallyStoredCopyOf;
         length = 7;
         break;
      }

      case DataType: {
         static const char staticallyStoredDataType[] = {
            100, 97, 116, 97, 45, 116, 121, 112, 101, 0
         };
         data = staticallyStoredDataType;
         length = 9;
         break;
      }

      case DefaultCollation: {
         static const char staticallyStoredDefaultCollation[] = {
            100, 101, 102, 97, 117, 108, 116, 45, 99, 111, 108, 108, 97, 116, 105, 111, 110, 0
         };
         data = staticallyStoredDefaultCollation;
         length = 17;
         break;
      }

      case DefaultValidation: {
         static const char staticallyStoredDefaultValidation[] = {
            100, 101, 102, 97, 117, 108, 116, 45, 118, 97, 108, 105, 100, 97, 116, 105, 111, 110, 0
         };
         data = staticallyStoredDefaultValidation;
         length = 18;
         break;
      }

      case DoctypePublic: {
         static const char staticallyStoredDoctypePublic[] = {
            100, 111, 99, 116, 121, 112, 101, 45, 112, 117, 98, 108, 105, 99, 0
         };
         data = staticallyStoredDoctypePublic;
         length = 14;
         break;
      }

      case DoctypeSystem: {
         static const char staticallyStoredDoctypeSystem[] = {
            100, 111, 99, 116, 121, 112, 101, 45, 115, 121, 115, 116, 101, 109, 0
         };
         data = staticallyStoredDoctypeSystem;
         length = 14;
         break;
      }

      case Document: {
         static const char staticallyStoredDocument[] = {
            100, 111, 99, 117, 109, 101, 110, 116, 0
         };
         data = staticallyStoredDocument;
         length = 8;
         break;
      }

      case Element: {
         static const char staticallyStoredElement[] = {
            101, 108, 101, 109, 101, 110, 116, 0
         };
         data = staticallyStoredElement;
         length = 7;
         break;
      }

      case Elements: {
         static const char staticallyStoredElements[] = {
            101, 108, 101, 109, 101, 110, 116, 115, 0
         };
         data = staticallyStoredElements;
         length = 8;
         break;
      }

      case Encoding: {
         static const char staticallyStoredEncoding[] = {
            101, 110, 99, 111, 100, 105, 110, 103, 0
         };
         data = staticallyStoredEncoding;
         length = 8;
         break;
      }

      case EscapeUriAttributes: {
         static const char staticallyStoredEscapeUriAttributes[] = {
            101, 115, 99, 97, 112, 101, 45, 117, 114, 105, 45, 97, 116, 116, 114, 105, 98, 117, 116, 101, 115, 0
         };
         data = staticallyStoredEscapeUriAttributes;
         length = 21;
         break;
      }

      case ExcludeResultPrefixes: {
         static const char staticallyStoredExcludeResultPrefixes[] = {
            101, 120, 99, 108, 117, 100, 101, 45, 114, 101, 115, 117, 108, 116, 45, 112, 114, 101, 102, 105, 120, 101, 115, 0
         };
         data = staticallyStoredExcludeResultPrefixes;
         length = 23;
         break;
      }

      case ExtensionElementPrefixes: {
         static const char staticallyStoredExtensionElementPrefixes[] = {
            101, 120, 116, 101, 110, 115, 105, 111, 110, 45, 101, 108, 101, 109, 101, 110, 116, 45, 112, 114, 101, 102, 105, 120, 101, 115, 0
         };
         data = staticallyStoredExtensionElementPrefixes;
         length = 26;
         break;
      }

      case Flags: {
         static const char staticallyStoredFlags[] = {
            102, 108, 97, 103, 115, 0
         };
         data = staticallyStoredFlags;
         length = 5;
         break;
      }

      case ForEach: {
         static const char staticallyStoredForEach[] = {
            102, 111, 114, 45, 101, 97, 99, 104, 0
         };
         data = staticallyStoredForEach;
         length = 8;
         break;
      }

      case Format: {
         static const char staticallyStoredFormat[] = {
            102, 111, 114, 109, 97, 116, 0
         };
         data = staticallyStoredFormat;
         length = 6;
         break;
      }

      case Function: {
         static const char staticallyStoredFunction[] = {
            102, 117, 110, 99, 116, 105, 111, 110, 0
         };
         data = staticallyStoredFunction;
         length = 8;
         break;
      }

      case Href: {
         static const char staticallyStoredHref[] = {
            104, 114, 101, 102, 0
         };
         data = staticallyStoredHref;
         length = 4;
         break;
      }

      case Id: {
         static const char staticallyStoredId[] = {
            105, 100, 0
         };
         data = staticallyStoredId;
         length = 2;
         break;
      }

      case If: {
         static const char staticallyStoredIf[] = {
            105, 102, 0
         };
         data = staticallyStoredIf;
         length = 2;
         break;
      }

      case Import: {
         static const char staticallyStoredImport[] = {
            105, 109, 112, 111, 114, 116, 0
         };
         data = staticallyStoredImport;
         length = 6;
         break;
      }

      case ImportSchema: {
         static const char staticallyStoredImportSchema[] = {
            105, 109, 112, 111, 114, 116, 45, 115, 99, 104, 101, 109, 97, 0
         };
         data = staticallyStoredImportSchema;
         length = 13;
         break;
      }

      case Include: {
         static const char staticallyStoredInclude[] = {
            105, 110, 99, 108, 117, 100, 101, 0
         };
         data = staticallyStoredInclude;
         length = 7;
         break;
      }

      case IncludeContentType: {
         static const char staticallyStoredIncludeContentType[] = {
            105, 110, 99, 108, 117, 100, 101, 45, 99, 111, 110, 116, 101, 110, 116, 45, 116, 121, 112, 101, 0
         };
         data = staticallyStoredIncludeContentType;
         length = 20;
         break;
      }

      case Indent: {
         static const char staticallyStoredIndent[] = {
            105, 110, 100, 101, 110, 116, 0
         };
         data = staticallyStoredIndent;
         length = 6;
         break;
      }

      case InheritNamespaces: {
         static const char staticallyStoredInheritNamespaces[] = {
            105, 110, 104, 101, 114, 105, 116, 45, 110, 97, 109, 101, 115, 112, 97, 99, 101, 115, 0
         };
         data = staticallyStoredInheritNamespaces;
         length = 18;
         break;
      }

      case InputTypeAnnotations: {
         static const char staticallyStoredInputTypeAnnotations[] = {
            105, 110, 112, 117, 116, 45, 116, 121, 112, 101, 45, 97, 110, 110, 111, 116, 97, 116, 105, 111, 110, 115, 0
         };
         data = staticallyStoredInputTypeAnnotations;
         length = 22;
         break;
      }

      case Key: {
         static const char staticallyStoredKey[] = {
            107, 101, 121, 0
         };
         data = staticallyStoredKey;
         length = 3;
         break;
      }

      case Lang: {
         static const char staticallyStoredLang[] = {
            108, 97, 110, 103, 0
         };
         data = staticallyStoredLang;
         length = 4;
         break;
      }

      case Match: {
         static const char staticallyStoredMatch[] = {
            109, 97, 116, 99, 104, 0
         };
         data = staticallyStoredMatch;
         length = 5;
         break;
      }

      case MatchingSubstring: {
         static const char staticallyStoredMatchingSubstring[] = {
            109, 97, 116, 99, 104, 105, 110, 103, 45, 115, 117, 98, 115, 116, 114, 105, 110, 103, 0
         };
         data = staticallyStoredMatchingSubstring;
         length = 18;
         break;
      }

      case MediaType: {
         static const char staticallyStoredMediaType[] = {
            109, 101, 100, 105, 97, 45, 116, 121, 112, 101, 0
         };
         data = staticallyStoredMediaType;
         length = 10;
         break;
      }

      case Message: {
         static const char staticallyStoredMessage[] = {
            109, 101, 115, 115, 97, 103, 101, 0
         };
         data = staticallyStoredMessage;
         length = 7;
         break;
      }

      case Method: {
         static const char staticallyStoredMethod[] = {
            109, 101, 116, 104, 111, 100, 0
         };
         data = staticallyStoredMethod;
         length = 6;
         break;
      }

      case Mode: {
         static const char staticallyStoredMode[] = {
            109, 111, 100, 101, 0
         };
         data = staticallyStoredMode;
         length = 4;
         break;
      }

      case Name: {
         static const char staticallyStoredName[] = {
            110, 97, 109, 101, 0
         };
         data = staticallyStoredName;
         length = 4;
         break;
      }

      case Namespace: {
         static const char staticallyStoredNamespace[] = {
            110, 97, 109, 101, 115, 112, 97, 99, 101, 0
         };
         data = staticallyStoredNamespace;
         length = 9;
         break;
      }

      case NonMatchingSubstring: {
         static const char staticallyStoredNonMatchingSubstring[] = {
            110, 111, 110, 45, 109, 97, 116, 99, 104, 105, 110, 103, 45, 115, 117, 98, 115, 116, 114, 105, 110, 103, 0
         };
         data = staticallyStoredNonMatchingSubstring;
         length = 22;
         break;
      }

      case NormalizationForm: {
         static const char staticallyStoredNormalizationForm[] = {
            110, 111, 114, 109, 97, 108, 105, 122, 97, 116, 105, 111, 110, 45, 102, 111, 114, 109, 0
         };
         data = staticallyStoredNormalizationForm;
         length = 18;
         break;
      }

      case OmitXmlDeclaration: {
         static const char staticallyStoredOmitXmlDeclaration[] = {
            111, 109, 105, 116, 45, 120, 109, 108, 45, 100, 101, 99, 108, 97, 114, 97, 116, 105, 111, 110, 0
         };
         data = staticallyStoredOmitXmlDeclaration;
         length = 20;
         break;
      }

      case Order: {
         static const char staticallyStoredOrder[] = {
            111, 114, 100, 101, 114, 0
         };
         data = staticallyStoredOrder;
         length = 5;
         break;
      }

      case Otherwise: {
         static const char staticallyStoredOtherwise[] = {
            111, 116, 104, 101, 114, 119, 105, 115, 101, 0
         };
         data = staticallyStoredOtherwise;
         length = 9;
         break;
      }

      case Output: {
         static const char staticallyStoredOutput[] = {
            111, 117, 116, 112, 117, 116, 0
         };
         data = staticallyStoredOutput;
         length = 6;
         break;
      }

      case OutputVersion: {
         static const char staticallyStoredOutputVersion[] = {
            111, 117, 116, 112, 117, 116, 45, 118, 101, 114, 115, 105, 111, 110, 0
         };
         data = staticallyStoredOutputVersion;
         length = 14;
         break;
      }

      case Override: {
         static const char staticallyStoredOverride[] = {
            111, 118, 101, 114, 114, 105, 100, 101, 0
         };
         data = staticallyStoredOverride;
         length = 8;
         break;
      }

      case Param: {
         static const char staticallyStoredParam[] = {
            112, 97, 114, 97, 109, 0
         };
         data = staticallyStoredParam;
         length = 5;
         break;
      }

      case PerformSort: {
         static const char staticallyStoredPerformSort[] = {
            112, 101, 114, 102, 111, 114, 109, 45, 115, 111, 114, 116, 0
         };
         data = staticallyStoredPerformSort;
         length = 12;
         break;
      }

      case PreserveSpace: {
         static const char staticallyStoredPreserveSpace[] = {
            112, 114, 101, 115, 101, 114, 118, 101, 45, 115, 112, 97, 99, 101, 0
         };
         data = staticallyStoredPreserveSpace;
         length = 14;
         break;
      }

      case Priority: {
         static const char staticallyStoredPriority[] = {
            112, 114, 105, 111, 114, 105, 116, 121, 0
         };
         data = staticallyStoredPriority;
         length = 8;
         break;
      }

      case ProcessingInstruction: {
         static const char staticallyStoredProcessingInstruction[] = {
            112, 114, 111, 99, 101, 115, 115, 105, 110, 103, 45, 105, 110, 115, 116, 114, 117, 99, 116, 105, 111, 110, 0
         };
         data = staticallyStoredProcessingInstruction;
         length = 22;
         break;
      }

      case Regex: {
         static const char staticallyStoredRegex[] = {
            114, 101, 103, 101, 120, 0
         };
         data = staticallyStoredRegex;
         length = 5;
         break;
      }

      case Required: {
         static const char staticallyStoredRequired[] = {
            114, 101, 113, 117, 105, 114, 101, 100, 0
         };
         data = staticallyStoredRequired;
         length = 8;
         break;
      }

      case ResultDocument: {
         static const char staticallyStoredResultDocument[] = {
            114, 101, 115, 117, 108, 116, 45, 100, 111, 99, 117, 109, 101, 110, 116, 0
         };
         data = staticallyStoredResultDocument;
         length = 15;
         break;
      }

      case SchemaLocation: {
         static const char staticallyStoredSchemaLocation[] = {
            115, 99, 104, 101, 109, 97, 45, 108, 111, 99, 97, 116, 105, 111, 110, 0
         };
         data = staticallyStoredSchemaLocation;
         length = 15;
         break;
      }

      case Select: {
         static const char staticallyStoredSelect[] = {
            115, 101, 108, 101, 99, 116, 0
         };
         data = staticallyStoredSelect;
         length = 6;
         break;
      }

      case Separator: {
         static const char staticallyStoredSeparator[] = {
            115, 101, 112, 97, 114, 97, 116, 111, 114, 0
         };
         data = staticallyStoredSeparator;
         length = 9;
         break;
      }

      case Sequence: {
         static const char staticallyStoredSequence[] = {
            115, 101, 113, 117, 101, 110, 99, 101, 0
         };
         data = staticallyStoredSequence;
         length = 8;
         break;
      }

      case Sort: {
         static const char staticallyStoredSort[] = {
            115, 111, 114, 116, 0
         };
         data = staticallyStoredSort;
         length = 4;
         break;
      }

      case Stable: {
         static const char staticallyStoredStable[] = {
            115, 116, 97, 98, 108, 101, 0
         };
         data = staticallyStoredStable;
         length = 6;
         break;
      }

      case Standalone: {
         static const char staticallyStoredStandalone[] = {
            115, 116, 97, 110, 100, 97, 108, 111, 110, 101, 0
         };
         data = staticallyStoredStandalone;
         length = 10;
         break;
      }

      case StripSpace: {
         static const char staticallyStoredStripSpace[] = {
            115, 116, 114, 105, 112, 45, 115, 112, 97, 99, 101, 0
         };
         data = staticallyStoredStripSpace;
         length = 11;
         break;
      }

      case Stylesheet: {
         static const char staticallyStoredStylesheet[] = {
            115, 116, 121, 108, 101, 115, 104, 101, 101, 116, 0
         };
         data = staticallyStoredStylesheet;
         length = 10;
         break;
      }

      case Template: {
         static const char staticallyStoredTemplate[] = {
            116, 101, 109, 112, 108, 97, 116, 101, 0
         };
         data = staticallyStoredTemplate;
         length = 8;
         break;
      }

      case Terminate: {
         static const char staticallyStoredTerminate[] = {
            116, 101, 114, 109, 105, 110, 97, 116, 101, 0
         };
         data = staticallyStoredTerminate;
         length = 9;
         break;
      }

      case Test: {
         static const char staticallyStoredTest[] = {
            116, 101, 115, 116, 0
         };
         data = staticallyStoredTest;
         length = 4;
         break;
      }

      case Text: {
         static const char staticallyStoredText[] = {
            116, 101, 120, 116, 0
         };
         data = staticallyStoredText;
         length = 4;
         break;
      }

      case Transform: {
         static const char staticallyStoredTransform[] = {
            116, 114, 97, 110, 115, 102, 111, 114, 109, 0
         };
         data = staticallyStoredTransform;
         length = 9;
         break;
      }

      case Tunnel: {
         static const char staticallyStoredTunnel[] = {
            116, 117, 110, 110, 101, 108, 0
         };
         data = staticallyStoredTunnel;
         length = 6;
         break;
      }

      case Type: {
         static const char staticallyStoredType[] = {
            116, 121, 112, 101, 0
         };
         data = staticallyStoredType;
         length = 4;
         break;
      }

      case UndeclarePrefixes: {
         static const char staticallyStoredUndeclarePrefixes[] = {
            117, 110, 100, 101, 99, 108, 97, 114, 101, 45, 112, 114, 101, 102, 105, 120, 101, 115, 0
         };
         data = staticallyStoredUndeclarePrefixes;
         length = 18;
         break;
      }

      case Use: {
         static const char staticallyStoredUse[] = {
            117, 115, 101, 0
         };
         data = staticallyStoredUse;
         length = 3;
         break;
      }

      case UseAttributeSets: {
         static const char staticallyStoredUseAttributeSets[] = {
            117, 115, 101, 45, 97, 116, 116, 114, 105, 98, 117, 116, 101, 45, 115, 101, 116, 115, 0
         };
         data = staticallyStoredUseAttributeSets;
         length = 18;
         break;
      }

      case UseCharacterMaps: {
         static const char staticallyStoredUseCharacterMaps[] = {
            117, 115, 101, 45, 99, 104, 97, 114, 97, 99, 116, 101, 114, 45, 109, 97, 112, 115, 0
         };
         data = staticallyStoredUseCharacterMaps;
         length = 18;
         break;
      }

      case UseWhen: {
         static const char staticallyStoredUseWhen[] = {
            117, 115, 101, 45, 119, 104, 101, 110, 0
         };
         data = staticallyStoredUseWhen;
         length = 8;
         break;
      }

      case Validation: {
         static const char staticallyStoredValidation[] = {
            118, 97, 108, 105, 100, 97, 116, 105, 111, 110, 0
         };
         data = staticallyStoredValidation;
         length = 10;
         break;
      }

      case ValueOf: {
         static const char staticallyStoredValueOf[] = {
            118, 97, 108, 117, 101, 45, 111, 102, 0
         };
         data = staticallyStoredValueOf;
         length = 8;
         break;
      }

      case Variable: {
         static const char staticallyStoredVariable[] = {
            118, 97, 114, 105, 97, 98, 108, 101, 0
         };
         data = staticallyStoredVariable;
         length = 8;
         break;
      }

      case Version: {
         static const char staticallyStoredVersion[] = {
            118, 101, 114, 115, 105, 111, 110, 0
         };
         data = staticallyStoredVersion;
         length = 7;
         break;
      }

      case When: {
         static const char staticallyStoredWhen[] = {
            119, 104, 101, 110, 0
         };
         data = staticallyStoredWhen;
         length = 4;
         break;
      }

      case WithParam: {
         static const char staticallyStoredWithParam[] = {
            119, 105, 116, 104, 45, 112, 97, 114, 97, 109, 0
         };
         data = staticallyStoredWithParam;
         length = 10;
         break;
      }

      case XpathDefaultNamespace: {
         static const char staticallyStoredXpathDefaultNamespace[] = {
            120, 112, 97, 116, 104, 45, 100, 101, 102, 97, 117, 108, 116, 45, 110, 97, 109, 101, 115, 112, 97, 99, 101, 0
         };
         data = staticallyStoredXpathDefaultNamespace;
         length = 23;
         break;
      }

      default:
         /* It's either the default token, or an undefined enum
          * value. We silence a compiler warning, and return the
          * empty string. */
         ;
   }

   return QString::fromLatin1(data, length);
}
